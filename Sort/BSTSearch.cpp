/*
二叉搜索树的查找算法:

在二叉搜索树T中查找x的过程为：

1. 若T是空树，则搜索失败，否则：
2. 若x等于T的根节点的数据域之值，则查找成功；
3. 若x小于T的根节点的数据域之值，则搜索左子树，否则查找右子树。

noteworthy:
	1.在二叉搜索树中一直往左走即最小值，一直往右走即最大值
*/

//递归查找
Position SearchBST(BiTree T, KeyType key){

  if(!T) { //查找不成功
    return NULL;//树为空
  }
  else if (key == T->data.key) { //查找成功
    return T;
  }
  else if (key < T->data.key) //在左子树中继续查找
    return SearchBST(T->lchild, key);
  else //在右子树中继续查找
    return SearchBST(T->rchild, key);
}

//非递归查找
Position SearchBST(BiTree T, KeyType key){
	while(T){
		if(key < T->data.key){
			T = T->lchild;
		}else if(key > T->data.key){
			T = T->rchild;
		}else{
			return T;
		}
	}

}