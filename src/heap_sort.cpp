//堆排序：大根堆向下调整
//性质一：索引为i的左孩子的索引是(2 * i + 1);
//性质二：索引为i的左孩子的索引是(2 * i + 2);
//性质三：索引为i的父结点的索引是 floor((i - 1) / 2);
//参数start -- 被下调节点的起始位置(一般为0，表示从第1个开始)
//参数end   -- 截至范围(一般为数组中最后一个元素的索引)
void maxHeapDown(int a[], int start, int end)
{
    int current = start;            // 当前(current)节点的位置
    int left = 2 * current + 1;        // 为左(left)孩子的位置
    int tmp = a[current];            // 当前(current)节点的值
    for (; left <= end; current = left, left = 2 * left + 1)
    {
         // "left"是左孩子，"left+1"是右孩子
         if (left < end && a[left] < a[left + 1])
			 left++;        // 左右两孩子中选择较大者
         if (tmp >= a[left])
             break;        // 调整结束
         else            // 交换值
         {
             a[current] = a[left];
             a[left] = tmp;
         }
    }
}
//堆排序(升序)：交换数据，将a[1]和a[n]交换，使a[n]是a[1...n]中的最大值；然后将a[1...n-1]重新调整为最大堆。
void Heap_Sort_Asc(int a[], int n)
{
    int i, tmp;
    for (i = n / 2 - 1; i >= 0; i--)		// 从(n/2-1) --> 0逐次遍历。遍历之后，得到的数组实际上是一个(最大)二叉堆。
        maxHeapDown(a, i, n - 1);
	//交换数据
    for (i = n - 1; i > 0; i--)
    {
        // 交换a[0]和a[i]。交换后，a[i]是a[0...i]中最大的。
        tmp = a[0];
        a[0] = a[i];
        a[i] = tmp;
        // 调整a[0...i-1]，使得a[0...i-1]仍然是一个最大堆。
        maxHeapDown(a, 0, i - 1);
    }
}