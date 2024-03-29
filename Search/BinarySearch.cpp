// 二分查找（折半查找）
/*
	return : index of target in Array
	Pay attention to the point,otherwise the vector will crosses the line
		1.low <= high
		2.mid = low + (high - low) / 2
*/

// 非递归
int BinarySearch(vector<int> v, int value)
{
	if (v.size() <= 0)
		return -1;

	int low = 0;
	int high = v.size() - 1;
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (v[mid] == value)
			return mid;
		else if (v[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return -1;
}

// 递归
int BinarySearch2(vector<int> v, int value, int low, int high)
{
	if (low > high)
		return -1;
	int mid = low + (high - low) / 2;
	if (v[mid] == value)
		return mid;
	else if (v[mid] > value)
		return BinarySearch2(v, value, low, mid - 1);
	else
		return BinarySearch2(v, value, mid + 1, high);
}