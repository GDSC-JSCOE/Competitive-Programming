class Solution

{

    //Function to find the minimum element in sorted and rotated array.

    static int minNumber(int nums[], int low, int high)

    {

        low = 0;

        high = nums.length - 1;

        while(low < high){

            int mid = (low + high) >> 1;// low + (high - low) / 2

            if(nums[mid] < nums[high]){

                high = mid;

            }else{

                low = mid + 1;

            }

        }

        return nums[low];

    }

}
