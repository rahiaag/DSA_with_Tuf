// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        int n = arr.size();
        int low = 0, high = n - 1;
        int floor = -1, ceil = -1;

        // Binary search for floor
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == x) {
                floor = arr[mid];
                break;
            } else if (arr[mid] < x) {
                floor = arr[mid];  // possible floor
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // Reset for ceil
        low = 0, high = n - 1;

        // Binary search for ceil
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == x) {
                ceil = arr[mid];
                break;
            } else if (arr[mid] > x) {
                ceil = arr[mid];  // possible ceil
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return {floor, ceil};
    }
};


// if duplicates are present then we are not considering it
/*
Brute Force Approach 
sort the array and then find the element and return the previous and next index of it 
case 1 maybe previous and next index is not present;
case 2 maybe duplicates are present so we will also check that condition as well

2ND Using inbuilt function

3rd using binary search but only if the array is sorted

*/