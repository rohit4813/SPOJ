#include <stdio.h>
#include <math.h>

class Node {
public:
    int lMax;
    int rMax;
    int anyMax;
    int sum;

    Node(int l, int a, int r, int s) {
        lMax = l;
        rMax = r;
        anyMax = a;
        sum = s;
    }
};

Node **segmentTree;
int *array;

int max(int a, int b) {
    if (a > b)return a;
    else return b;
}

void segmentTreeConstructor(int arrayLo, int arrayHi, int stIndex) {
    if (arrayLo == arrayHi) {
        segmentTree[stIndex] = new Node(array[arrayLo], array[arrayLo], array[arrayLo], array[arrayLo]);
        printf("in creation %d\n",stIndex);
        return;
    }

printf("pos:%d\n",stIndex);
    int mid = (arrayLo + arrayHi) / 2;
    segmentTreeConstructor(arrayLo, mid, stIndex * 2 + 1);
    segmentTreeConstructor(mid + 1, arrayHi, stIndex * 2 + 2);

    Node *current = segmentTree[stIndex] = new Node(0, 0, 0, 0);
    Node *leftChild = segmentTree[stIndex * 2 + 1];
    Node *rightChild = segmentTree[stIndex * 2 + 2];

    current->lMax = max(leftChild->lMax, leftChild->sum + rightChild->lMax);
    current->rMax = max(leftChild->rMax + rightChild->sum, rightChild->rMax);
    current->anyMax = max(leftChild->anyMax, max(leftChild->rMax + rightChild->lMax, rightChild->anyMax));
    current->sum = leftChild->sum + rightChild->sum;

printf("left:%d right:%d mid:%d sum:%d position:%d\n",current->lMax,current->rMax,current->anyMax,current->sum,stIndex);
}

Node& find(int stIndex, int qLow, int qHi, int currentLo, int currentHi) {
    if (qLow == currentLo && qHi == currentHi)return *(segmentTree[stIndex]);
    int mid = (currentLo + currentHi) / 2;
    if (qHi <= mid)return find(2 * stIndex + 1, qLow, qHi, currentLo, mid);
    else if (qLow > mid)return find(2 * stIndex + 2, qLow, qHi, mid + 1, currentHi);
    else {
        Node *currentResult = new Node(0, 0, 0, 0);
        Node leftResult = find(2 * stIndex + 1, qLow, mid, currentLo, mid);
        Node rightResult = find(2 * stIndex + 2, mid + 1, qHi, mid + 1, currentHi);

        currentResult->lMax = max(leftResult.lMax, leftResult.sum + rightResult.lMax);
        currentResult->rMax = max(leftResult.rMax + rightResult.sum, rightResult.rMax);
        currentResult->anyMax = max(leftResult.anyMax, max(leftResult.rMax + rightResult.lMax, rightResult.anyMax));
        currentResult->sum = leftResult.sum + rightResult.sum;

        return *currentResult;
    }
}

void constructSegmentTree(int* array, int size) {
    int height = (int) ceil(log((double) size) / log((double) 2));
    segmentTree = new Node*[(int) ceil(pow((double) 2, height + 1))];
    printf("height:%d\n",height);
    segmentTreeConstructor(0, size - 1, 0);
}

int main() {
    int nElements;
    scanf("%d", &nElements);
    array = new int[nElements];
    for (int i = 0; i < nElements; ++i)scanf("%d", &array[i]);
    constructSegmentTree(array, nElements);
    int nQueries;
    scanf("%d", &nQueries);
    while (nQueries--) {
        int l, h;
        scanf("%d %d", &l, &h);
        Node result = find(0, l - 1, h - 1, 0, nElements - 1);
        printf("%d\n", result.anyMax);
    }
}

