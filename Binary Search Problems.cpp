//******************************* 1. BINARY SEARCH ( BRUTE FORCE )**********************//

/*#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;
     while(start<=end)
     {
         if(arr[mid]==key)
            return mid;

        else if(key>arr[mid])
            start = mid++;
         else if(key<arr[mid])
            end = mid--;

     }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[100];

    cout<<"Enter the array elements: "<<endl;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int element;
    cout<<"Enter the element to search: "<<endl;
    cin>>element;

    int output;
    output = BinarySearch(arr,n,element);

    if(output == -1)
        cout<<"Key NOT FOUND!!!"<<endl;
    else
        cout<<"Key Found at :"<<output<<endl;
}*/

//****************************************2. BINARY SEARCH (OPTIMISED SOLUTION )********************//

/*#include <iostream>
  using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}

int main() {
  int myarr[10];
  int num;
  int output;

  cout << "Please enter 10 elements ASCENDING order" << endl;
  for (int i = 0; i < 10; i++) {
    cin >> myarr[i];
  }
  cout << "Please enter an element to search" << endl;
  cin >> num;

  output = binarySearch(myarr, 0, 9, num);

  if (output == -1) {
    cout << "No Match Found" << endl;
  } else {
    cout << "Match found at position: " << output << endl;
  }

  return 0;
}*/

//********************************3. FIRST AND LAST OCCURRENCE IN SORTED ARRAY***********************//

/*#include<iostream>
using namespace std;

int FirstOccurrence(int arr[], int n, int key)
{
    int start = 0;
    int e = n-1;
    int mid = start + (e-start)/2;
    int ans = -1;

    while(start <= e)
    {
        if(arr[mid]== key)
        {
            ans = mid;
            e = mid -1;
        }
        else if(key>arr[mid])
            start = mid+1;
        else
            e = mid -1;
        mid = start + (e - start)/2;
    }
    return ans;
}

int LastOccurrence(int arr[], int n, int key)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int result= -1;

    while(s<=e)
    {
        if(arr[mid] == key)
        {
            result = mid;
            s = mid+1;
        }
        else if(key>arr[mid])
        {
            s = mid+1;
        }
        else
            e = mid-1;
        mid = s+ (e-s)/2;
    }
    return result;
}

int main()
{
    int even [5] = {1,3,3,3,5};



    cout<<"First Occurrence of 3 is at index : "<<FirstOccurrence(even , 5, 3)<<endl;
     cout<<"Last Occurrence of 3 is at index : "<<LastOccurrence(even , 5, 3)<<endl;
}/*

//******************************************* 4. TOTAL NUMBER OF OCCURRENCES *************************/
//_______________________________________________USING BINARY SEARCH O(log n)_________________________________//

/*#include<iostream>
using namespace std;

int FirstOccurrence(int arr[], int n, int key)
{
    int start = 0;
    int e = n-1;
    int mid = start + (e-start)/2;
    int ans = -1;

    while(start <= e)
    {
        if(arr[mid]== key)
        {
            ans = mid;
            e = mid -1;
        }
        else if(key>arr[mid])
            start = mid+1;
        else
            e = mid -1;
        mid = start + (e - start)/2;
    }
    return ans;
}

int LastOccurrence(int arr[], int n, int key)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int result= -1;

    while(s<=e)
    {
        if(arr[mid] == key)
        {
            result = mid;
            s = mid+1;
        }
        else if(key>arr[mid])
        {
            s = mid+1;
        }
        else
            e = mid-1;
        mid = s+ (e-s)/2;
    }
    return result;
}

int main()
{
    int even [5] = {1,3,3,3,5};

    int firstOcc = FirstOccurrence(even , 5, 3);
    int LastOcc   =LastOccurrence(even , 5, 3);
    int TotalOcc = 0;

    cout<<"First Occurrence of 3 is at index : "<<FirstOccurrence(even , 5, 3)<<endl;
     cout<<"Last Occurrence of 3 is at index : "<<LastOccurrence(even , 5, 3)<<endl;
     TotalOcc = (LastOcc- firstOcc)+1;

     cout<<"Total Number of Occurrences :"<<TotalOcc<<endl;
}*/

//******************************************* 4. TOTAL NUMBER OF OCCURRENCES *************************//
//_______________________________________________USING LINEAR SEARCH  O(n)_________________________________//

/*#include<iostream>
using namespace std;

int Linearsearch (int arr[], int n , int key)
{
    int count = 0;
    for(int i =0;i<n;i++)
        if(arr[i]==key)
    {
        count++;
    }
    return count;
}
int main()
{
    int arr[8] = {1,2,3,4,4,4,5,4};

    int output = Linearsearch(arr,8,4);
    cout<<"Total Number of Occurrences of 4 are : "<<output<<endl;

    return 0;
}*/

//*********************************************5. PEAK IN A MOUNTAIN ARRAY ******************************
//_____________________________________________LEETCODE__________________________________________________

/*class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int s =0;
        int e = arr.size()-1;
        int mid = s+(e-s)/2;

        while(s<e)
        {
            if(arr[mid]<arr[mid+1])
            {
                s = mid+1;
            }
            else
            {
                e = mid;
            }

            mid = s +(e-s)/2;
        }

        return s;

    }
};*/

//*********************************************6. FIND PIVOT ELEMENT IN ARRAY  ******************************
//_____________________________________________LEETCODE__________________________________________________

                                      //Whose left and right side sum is equal
/*class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int left_sum=0;
        int Total_sum = 0;

        for(int i =0;i<nums.size();i++)
        {
            Total_sum +=nums[i];
        }

        for(int i =0;i<nums.size();i++)
        {
            if(Total_sum-nums[i]-left_sum == left_sum)
                return i;
            else
                left_sum = left_sum+nums[i];
        }

        return -1;

    }
};*/

//********************************************7. FIND PIVOT ELEMENT (MINIMUM ELEMENT) IN ARRAY*******************
//__________________________________________________O(log n) Complexity__________________________________________

/*#include<iostream>
using namespace std;

int Pivot(int arr[], int n)
{
    int s =0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<e)
    {
        if(arr[mid]>=arr[0])
            s = mid+1;
        else
            e = mid;
        mid = s+(e-s)/2;
    }
    return s;
}
int main()
{

    int arr[4] = {3,10,17,1};

    int output = Pivot(arr,4);
    cout<<"The pivot index is : "<<output<<endl;

}*/

//**********************************************8. SEARCH IN A ROTATED SORTED ARRAY ****************************
//_____________________________________________________CODESTUDIO________________________________________________

/*int Getpivot(vector<int>& arr , int n)
{
	int s = 0;
	int e = n-1;
	int mid = s + (e-s)/2;

	while(s<e)
	{
		if(arr[mid]>=arr[0])
			s = mid+1;
		else
			e= mid;
		mid = s+(e-s)/2;
	}
	return s;
}

int BinarySearch(vector<int>& arr, int n, int k, int s, int e)
{
	int start=s;
	int end = e;
	int mid = s+(e-s)/2;

	while(s<=e)
	{
		if(arr[mid]== k)
			return mid;
		else if (arr[mid]<k)
			s = mid+1;
		else
			e = mid-1;
		mid = s+(e-s)/2;
	}
	return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
int pivot = Getpivot(arr,n);
	if(k >= arr[pivot] && k<=arr[n-1])
		//BS on line 2
		return BinarySearch(arr,n,k,pivot,n-1);
	else
		//BS on line 1
		return BinarySearch(arr,n,k,0,pivot-1);

}*/

//************************************************9. SQUARE ROOT USING BINARY SEARCH ***************************
//______________________________________________________LEETCODE / CODESTUDIO___________________________________

/*class Solution {
public:

    long long int BinarySearch (int n)
    {
        int s = 0;
        int e = n;
        long long int mid = s +(e-s)/2;
        long long int ans = 0;

        while(s<=e)
        {

        long long int square = mid*mid;
            if(square==n)
                return mid;
            else if(square < n)
            {
                ans = mid;
                s = mid+1;
            }
            else
                e = mid-1;
            mid = s+(e-s)/2;
        }

        return ans;
    }
    int mySqrt(int x) {

        return BinarySearch(x);

    }
};*/

//***********************************10. FINDING THE FLOAT PART IN SQUARE ROOT************************

/*#include<iostream>
using namespace std;

long long int Sqrt_Absolute_integer(int N)
{
    int s =0;
    int e = N;
    long long int mid = s+(e-s)/2;
    long long int ans = 0;

    while(s<=e)
    {
        long long int square = mid* mid;
        if(square == N)
            return mid;
        else if (square <= N)
        {
            ans = mid;
            s = mid+1;
        }
        else
            e = mid-1;
        mid = s+(e-s)/2;
    }
    return ans;
}

double Float_Sqrt(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for(int i =0;i<precision;i++)
    {

        factor = factor/10;

        for(double j = ans;j*j<n;j+=factor)
        {
            ans = j;
        }
    }
    return ans;

}

int main()
{
    int n;
    cout<<"Enter the integer : "<<endl;
    cin>>n;

    int tempSol = Sqrt_Absolute_integer(n);
    cout<<" Sqrt ans with precision : "<<Float_Sqrt(n,3,tempSol);
}*/

//************************************11. BOOK ALLOCATION PROBLEM***********************
//___________________________________________CODESTUDIO_________________________________

/*bool isPossibleSoln(vector<int>arr, int n,int m, int mid)
{
	int StudentCount = 1;
	int PageSum = 0;

	for(int i =0;i<n;i++)
	{
		if(PageSum +arr[i] <= mid)
		{
			PageSum += arr[i];
		}

		else
		{
			StudentCount++;
			if(StudentCount > m || arr[i] >mid){
				return false;
			}
			PageSum = arr[i];

		}
	}

		return true;
	}


int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
	int s = 0;
	int sum =0;

	for (int i = 0;i<n;i++)
		sum+=arr[i];
	int e = sum;
	int mid = s+(e-s)/2;
	int ans = 0;
	while(s<=e)
	{
		if(isPossibleSoln(arr,n,m,mid)) {
			ans = mid;
			e = mid-1;
		}
		else
			s = mid+1;

		mid = s+(e-s)/2;
	}

	return ans;
}*/

//************************************11. BOOK ALLOCATION PROBLEM ( AYUSH NINJATEST )***********************
//___________________________________________CODESTUDIO_____________________________________________________

/*bool isPossible(long long int n, long long int m, long long int mid, vector<int> time)

{

   int days = 1;

   long long int chapters = 0;



   for (long long int i = 0; i<m; i++)

   {

       if(time[i] + chapters <= mid)

       {

           chapters = chapters + time[i];

       }

       else

       {

           days++;

        if(days > n || time[i] > mid)  // n is no. of given days

        {

            return false;

  }

           chapters = time[i];

       }

   }

   return true;

}



long long ayushGivesNinjatest(int n, int m, vector<int> time)

{

long long s = 0;

   long long sum = 0;  //m is size

   long long ans;

   for(int i = 0; i<m; i++)

   {

       sum = sum + time[i];

   }

   long long e = sum;

   long long mid = (s + (e-s)/2);



   while(s<=e)

   {

       if(isPossible(n, m, mid, time))

       {

           ans = mid;

           e = mid - 1;

       }

       else

       {

           s = mid + 1;

       }

       mid = (s + (e-s)/2);

   }

   return ans;

}*/


//************************************11. PAINTER'S PARTITION PROBLEM**********************
//___________________________________________CODESTUDIO_____________________________________________________

/*bool isPossible(vector<int> &boards, int n, int k, int mid) {

       int painter = 1;

   int boardCount = 0;





   for(int i = 0; i<n; i++) {

       if(boardCount + boards[i] <= mid) {

           boardCount += boards[i];

       }

       else

       {

           painter++;

           if(painter > k || boards[i] > mid ) {

           return false;

       }

           boardCount = boards[i];

       }





   }

   return true;

}



int findLargestMinDistance(vector<int> &boards, int k)

{

   int n = boards.size();

   int s = 0;

   int sum = 0;

   for(int i=0; i<n; i++) {

       sum += boards[i];

   }

   int e = sum;

   int ans = -1;

   long long int mid = s + (e-s)/2;



   while(s<=e) {

       if(isPossible(boards,n,k,mid)) {

           ans = mid;

           e = mid - 1;

       } else {

           s = mid + 1;

       }

       mid = s + (e-s)/2;

   }

   return ans;

}*/

//************************************12. AGGRESSIVE COWS PROBLEM**********************
//___________________________________________CODESTUDIO_____________________________________________________

/*bool isPossible(vector<int>&stalls, int mid, int k)
{
    int CowCount = 1;
    int LasPos = stalls[0];

    for(int i =0;i<stalls.size();i++)
    {
        if(stalls[i] - LasPos >= mid)
        {
            CowCount++;
            if(CowCount==k)
            {
                return true;
            }
            LasPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int s =0;
    int maxi = -1;
    int ans = -1;
    for (int i =0;i<stalls.size();i++)
    {
        maxi = max(maxi, stalls[i]);

    }
    int mid;
    int e ;
    e = maxi;
    mid = s+(e-s)/2;
    while(s<=e)
    {
        if(isPossible(stalls, mid, k))
        {
            ans = mid;
            s = mid +1;
        }
        else{
            e = mid-1;
        }
       mid = s+(e-s)/2;
    }
     return ans;
}*/




