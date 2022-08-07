class Solution {
public:
    void HeapSort(vector<int> &arr, int low, int high)
    {
        if(low >= high)
            return;
        int start = low;
        int end = high;
        int mid = start + (end - start) / 2;
        int pivot = arr[mid];
    
        while(start <= end)
        {
            while(arr[start] < pivot)
                start++;
            while(arr[end] > pivot)
                end--;
            
            if(start <= end)
            {
                int temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
                start++;
                end--;
            }
        }
        HeapSort(arr, low, end);
        HeapSort(arr, start, high);
    };
    int minimumSum(int num) {
        vector<int> arr;
        int c = log10(num);
        for(int i = 0; i < c + 1; i++)
        {
            arr.push_back(num % 10);
            num/= 10;
        }
           
        HeapSort(arr, 0, arr.size() - 1);

        return (arr[0] * 10) + arr[3] + (arr[1] * 10 + arr[2]);
    }
};