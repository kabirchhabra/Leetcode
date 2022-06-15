class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double i=0,j=0;
        vector<double> temp;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] < nums2[j]){
                temp.push_back(nums1[i]);
                i++;
            }
            else{
                temp.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            temp.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            temp.push_back(nums2[j]);
            j++;
        }
        
        if(temp.size()%2==0){
            int tm = temp.size()/2;
            double median = (temp[tm]+temp[tm-1])/2;
            return median;
        }
        else{
            double median = temp[temp.size()/2];
            return median;
        }
    }
};