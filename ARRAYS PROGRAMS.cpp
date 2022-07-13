//************************** 1. MAXIMUM AND MINIMUM IN ARRAY ******************//
//********************************USING FUNCTIONS******************************//
/*#include<iostream>
using namespace std;

int Maximum (int arr[], int size)
{
    int max = INT_MIN;
    for(int i =0; i<size;i++)
    {
        if(max< arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int Minimum(int num[], int n)
{
    int min = INT_MAX;
    for(int i =0;i<n;i++)
    {
        if(num[i]<min)
        {
            min = num[i];
        }
    }
    return min;
}

int main ()
{
    int size;
    cin>>size;

    int num[10000];
    for(int i =0;i<size;i++){
        cin>>num[i];
    }

    cout<<"MAXIMUM ELEMENT IS : "<< Maximum(num , size)<<endl;
    cout<<"MINIMUM ELEMENT IS : "<< Minimum(num , size)<<endl;
}*/

//********************************USING BUILT IN FUNCTIONS******************************//
 /*#include<iostream>
 using namespace std;

 int GetMax(int arr[], int n)
 {
     int maxi;
     maxi = INT_MIN;
     for(int i =0;i<n;i++)
     {
         maxi = max(maxi,arr[i]);
     }
     return maxi;
 }

 int GetMin(int arr[],int size)
 {
     int minni = INT_MAX;
     for(int i =0;i<size;i++)
     {
         minni = min(minni,arr[i]);
     }
     return minni;
 }
 int main()

 {
     int size;
     cin>>size;

     int num[100];
     for(int i =0;i<size;i++)
     {
         cin>>num[i];
     }

     cout<<"MAXIMUM ELEMENT IS : "<< GetMax(num , size)<<endl;
    cout<<"MINIMUM ELEMENT IS : "<< GetMin(num , size)<<endl;

 }*/


 //************************** 2. SUM OF ALL ELEMENTS IN AN ARRAY ******************//
 /*#include<iostream>
 using namespace std;

 int GetSum(int arr[], int n)
 {
     int sum = 0;

     for(int i =0;i<n;i++)
     {
         sum+=arr[i];
     }

     return sum;
 }

 int main()
 {
     int size;
     cin>>size;

     int num[100];
     for(int i = 0;i<size;i++)
     {
         cin>>num[i];
     }

     cout<<"SUM OF ELEMENTS OF ARRAY IS : "<<GetSum(num,size)<<endl;
 }*/


 //*********************************3. TO CHECK IF NUMBER IS IN POWER OF 2 *******************//

 /*#include<iostream>
 using namespace std;

 int main()
 {
     int n;
     cin>>n;

     int val = (n & (n-1 ));
     if(val == 0){
        cout<<"TRUE : Power of 2"<<endl;
     }
     else{
        cout<<"FALSE :Not Power of 2"<<endl;
     }

     int p = (1<<n);   //left shift mtlb 1 k baad n number of 0's and it is equal to 2^n.
     cout<<"The value of 2^p : "<<p<<endl;

     int q = (n<<1); //left shift by 1 mtlb multiplication by 2^1 similarly
                    // left shift by n mtlb multiplication by 2^n
     cout<<"After multiplication value : "<<q<<endl;

     int r = (n>>2);  //right shift by 1 mtlb division by 2^1 similarly
                    // right shift by n mtlb division by 2^n
     cout<<"After division value : "<<r<<endl;
 }*/

 //**************************************4. LINEAR SEARCH IN AN ARRAY ***************//

/* #include<iostream>
 using namespace std;

 bool KeyFound(int arr[], int n, int element)
 {
     for(int i =0;i<n;i++)
        {
         if(arr[i]==element)
     {
         return 1;
     }
     }
     return 0;

 }
 int main()
 {
     int size;
     cin>>size;

     int num[100];
     for(int i =0;i<size;i++)
     {
         cin>>num[i];
     }

     int key;
     cout<<"Enter the element to be found : "<<endl;
     cin>>key;

     bool find = KeyFound(num , size, key);

     if (find)
     {
         cout<<" Key is Present in the array";
     }
     else
        cout<<"Key is not present in the array";

 }*/

 // ***************************5. REVERSE AN ARRAY *******************************//

 /*#include<iostream>
 using namespace std;

 void reverse(int arr[], int n)
 {
     int start = 0;
     int end = n-1;

     while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
     }

 }

 void printArr (int arr[], int n)
 {
cout<<"The reversed array : ";
    for(int i =0;i<n;i++)
    {

        cout<<arr[i]<<"\t";
    }
 }
 int main()
 {
     int size;
     cin>>size;

     int num[100];
     for(int i =0;i<size;i++)
     {
         cin>>num[i];

     }
     reverse(num , size);
     printArr(num, size);

 }*/

 //******************************** 6. SWAP ALTERNATE ELEMENTS IN AN ARRAY *******************//

 /*#include<iostream>
 using namespace std;

 void Swapped(int num[], int n)
 {
     for(int i =0;i<n;i+=2)
     {
         if((i+1) < n){
            swap(num[i], num[i+1]);
         }
     }
 }

 PrintArr(int num[], int n)
 {
     cout<<"The alternately reversed array is : "<<endl;
     cout<<endl;
     for(int i =0;i<n;i++)
     {
         cout<<num[i]<<"\t";
     }
 }
 int main(void)
 {
     int size;
     cin>>size;
     int arr[100];
     for(int i =0;i<size;i++)
     {
         cin>>arr[i];
     }
    Swapped(arr,size);
    PrintArr(arr, size);

 }*/

 //**************************************7. ALTERNATE SWAPPING WITHOUT USING INBUILT SWAP() *****************//

 /*#include<iostream>
 using namespace std;

 void AltSwap(int arr[], int n)
 {
     int temp;
     for(int i =0;i<n;i+=2)
     {
         if((i+1)<n)
         {
             temp = arr[i+1];
             arr[i+1] = arr[i];
             arr[i] = temp;
         }
     }
 }

void  PrintArr(int arr[], int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}

 int main()
 {
     int size;
     cin>>size;
     int num[100];
     for(int i =0;i<size;i++)
     {
         cin>>num[i];
     }

     AltSwap(num, size);
     PrintArr(num, size);

 }*/

 //****************************** 8. FIND UNIQUE ELEMENT IN AN ARRAY ********************//
 //***************************************CODESTUDIO*************************************//

 /*#include<iostream>
 using namespace std;

 int uniqueEle(int arr[], int n)
 {
     int ans =0;
     for(int i =0;i<n;i++)
     {
         ans = ans^arr[i];
     }
     return ans;
 }


 int main()
 {
     int size;
     cin>>size;

     int num[100];
     for(int i =0;i<size;i++)
     {
         cin>>num[i];
     }
     int result;
     result = uniqueEle(num, size);
    cout<<"The unique element is : "<< result<<endl;
    cout<<"Size of the array : "<<(sizeof(num)/sizeof(int));
 }*/


 //***************************************9. UNIQUE NUMBER OF OCCURRENCES********************//
 //***********************************************LEETCODE***********************************//

/* bool uniqueOccurrences(vector<int>& arr) {

        map<int, int>mp;
        for(int x : arr)
        {
            mp[x]= mp[x]+1;
        }

        set<int>st;
        for(auto i : mp)
        {
            if(st.count(i.second)>0)
                return false;
            else
                st.insert(i.second);
        }

        return true;

    }
};*/

//*************************************10. FIND 1 DUPLICATE IN AN ARRAY ***************************//

/*int findDuplicate(vector<int> &arr)
{
    // Write your code here
	int ans = 0;
	//XOR ing all the array elements (within array)
	for(int i =0;i<arr.size(); i++)
	{
		ans = ans^arr[i];
	}

	//XOR from [1,n-1]
	for(int i =1; i<arr.size(); i++){
		ans = ans^i;
	}
	return ans;
}*/

//********************************* 11. CODECHEF : ATMOST 1 SWAP OF STRING**************************//

 /*int main()
 {
     int T;
     cin>>T;
     for(int i = 0;i<T;i++)
     {

         int N;
         cin>>N;
         string str;


             cin>>str;


         string p;
         for(int k =0;k<N;k++)
         {
           p[k]=str[k];
         }

         sort(str.begin(), str.end());
         int swap =0;
         for(int o =0; o <N;o++)
         {
             if (p[o] != str[o])
            swap = swap+1;
         }
         if (swap<3)
           cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


     }
 }*/

 //*************************************12. FIND ALL DUPLICATES IN AN ARRAY ***************************//

 /*class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int>duplicates;
        sort(nums.begin(), nums.end());

        for(int i =0;i+1<nums.size();i++)
        {

            if(nums[i]==nums[i+1])
                duplicates.push_back(nums[i]);
        }

        return duplicates;

    }
 };*/

 //*********************************13. INTERSECTION OF TWO SORTED ARRAYS***********************//
 //*******************************************Codestudio****************************************//

 /*vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int>ans;
	for(int i =0;i<n;i++)
	{
		int element = arr1[i];

		for(int j =0;j<m;j++)
		{
			if(element == arr2[j])
			{
				ans.push_back(element);
				arr2[j] = -2;
				break;
			}
		}
	}
	return ans;
}*/


//*********************************13. INTERSECTION OF TWO SORTED ARRAYS***********************//
 //*******************************************OPTIMISED CODE (CODESTUDIO)****************************************//

/* vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	int i =0;
	int j = 0;
	vector<int>ans;

	while(i<n && j<m){
		if(arr1[i] <arr2[j])
			i++;
		else if(arr1[i]==arr2[j])
		{
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else{
			j++;
		}
	}

	return ans;
}*/


//*********************************14. INTERSECTION OF TWO UNSORTED ARRAYS***********************//
 //*******************************************LEETCODE****************************************//

 /*class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int>ans;
        set<int>s;
        sort(nums1.begin(),nums1.end());

        sort(nums2.begin(),nums2.end());

        for(int i =0;i<nums1.size();i++)
        {
            int element = nums1[i];


            for(int j =0;j<nums2.size();j++)
            {
                if(element == nums2[j])
                {

                    s.insert(element);

                 break;


                }
            }
        }


        for(auto itr = s.begin(); itr != s.end(); itr++){
            ans.push_back(*itr);

        }
      return ans;
    }
};*/

//*****************************************14. PAIR SUM **********************************//
//********************************************CODESTUDIO**********************************//

/*vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
	vector<vector<int>>ans;

	for(int i = 0;i<arr.size();i++)
	{
		for(int j = i+1;j<arr.size();j++)
		{
			if(arr[i] + arr[j] == s)
			{
				vector<int>temp;
				temp.push_back(min(arr[i], arr[j]));
				temp.push_back(max(arr[i], arr[j]));
				ans.push_back(temp);

			}
		}
	}
	sort(ans.begin(), ans.end());
	return ans;
}*/

//*************************************15. TRIPLETS WITH GIVEN SUM*****************//
//*******************************************CODESTUDIO****************************//

 //___________________________________________1. BRUTE FORCE O(n^3)_________________//

 /*vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<int>temp;
	vector<vector<int>>ans;
	for(int i =0;i<n;i++)
	{
		for(int j = i+1;j<n;j++)
		{
			for(int k = j+1;k<n;k++)
			{
				if(arr[i]+arr[j]+arr[k] == K)
				{
					temp.push_back(arr[i]);
					temp.push_back(arr[j]);
					temp.push_back(arr[k]);
					ans.push_back(temp);
				}
			}
		}
		return ans;
	}
}*/


//_______________________________2. OPTIMISED APPROACH O(n^2) and Space O(1)_)__________________//

/*vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<vector<int>> ans;

    //sort first so it becomes easy
    sort(arr.begin(), arr.end());
    int left,right;	//2ptr approach
    for(int i=0; i<n; i++){
        left = i+1;
        right = n-1;
        //terminary condn
        while(left<right){
            //check for sum, here we fix arr[i], and then form 2 pair sum over remaining elements of array
            if(arr[i] + arr[left] + arr[right] == K){
                //we got it, push it back
                ans.push_back({arr[i], arr[left], arr[right]});
                int x = arr[left];
                int y = arr[right];
                //skipping the same returned elements of left and right if they are present in duplicate form
                while(left<right && arr[left] == x){
                    left++;
                }
                while(left<right && arr[right] ==y){
                    right--;
                }
            } //if end
            //if not match then in else cases move left/right pointer as per condition
            else if(arr[i] + arr[left] + arr[right] < K){
                left++;
            }
            else{
                //arr[i] + arr[left] + arr[right] > K
                right--;
            }
        }//while end
        //we need to skip duplicates of arr[i], ith element if present
        while(i+1<n && arr[i]==arr[i+1]){
            i++;
        }
    }//for end
    return ans;

}*/

//*********************************** 16. SORT 01 ************************************//

/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    int n;
    cin>>n;
    int arr[100];

    for(int i =0;i<n;i++)
    {

        cin>>arr[i];
    }
    int low =0;
    int high = n-1;

    while(low<high){
        if(arr[low]== 0 && low<high)
        {
            low++;
        }
        else if(arr[high]==1 && low<high)
            high--;
        else if(arr[low]==1 && arr[high]==0 && low<high)
        {
            swap(arr[low],arr[high]);
            low++;
            high--;
        }
    }

    cout<<"Printing sorted array"<<endl;
    for(int j=0;j<n;j++)
    {

        cout<<arr[j]<<"\t";
}
}*/

//****************************************17. SORT 012************************//
//****************************************CODESTUDIO**************************//

/*void sort012(int *arr, int n)
{
   //   Write your code here
	int low = 0;
   int mid = 0;
   int high = n-1;

    while(mid<=high)
    {
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }

        else if(arr[mid]==1)
         mid++;

        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}*/
