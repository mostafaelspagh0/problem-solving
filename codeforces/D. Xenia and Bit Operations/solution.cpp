#include <bits/stdc++.h>
using namespace std;

int tree[300005];
int opration[300005];
int n, m;
int totalNUMs = 1;

int getLeftChild(int i) { return i * 2; }

int getRightChild(int i) { return getLeftChild(i) + 1; }

int getParent(int i) { return i / 2; }

bool isOprationOr(int i) {
  if (opration[i] == -1) {
    opration[i] = !isOprationOr(getLeftChild(i));
  }
  return opration[i];
}

int clacIndexTree(int i) {
  if (isOprationOr(i)) {
    return tree[getLeftChild(i)] | tree[getRightChild(i)];
  }
  return tree[getLeftChild(i)] ^ tree[getRightChild(i)];
}

void buildTree() {
  for (int i = totalNUMs - ((totalNUMs + 1) / 2); i > 0; i--) {
    tree[i] = clacIndexTree(i);
  }
}

void updateUtil(int i) {
  if (i == 1) {
    tree[i] = clacIndexTree(i);
    return;
  };
  tree[i] = clacIndexTree(i);
  updateUtil(getParent(i));
}

void update(int i, int v) {
  int realIndex = totalNUMs - i + 1;
  tree[realIndex] = v;
  updateUtil(getParent(realIndex));
}

int main() {
  memset(opration, -1, sizeof opration);
  scanf("%d %d", &n, &m);
  for (int i = 0; i <= n; i++) totalNUMs *= 2;
  totalNUMs -= 1;
  for (int i = totalNUMs; i > totalNUMs - ((totalNUMs + 1) / 2); i--) {
    scanf("%d", tree + i);
    opration[i] = false;
  }
  buildTree();
  int p, b;
  for (int i = 0; i < m; i++) {
    scanf("%d %d", &p, &b);
    update(p, b);
    printf("%d\n", tree[1]);
  }
}