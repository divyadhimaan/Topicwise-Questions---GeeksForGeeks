class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        int l = 0, h = n - 1;
		while (l < h) {
			if (arr[l] == 0) {
				l++;
				continue;
			}
			if (arr[h] == 1) {
				h--;
				continue;
			}
			int temp = arr[l];
			arr[l] = arr[h];
			arr[h] = temp;
		}
    }
};
