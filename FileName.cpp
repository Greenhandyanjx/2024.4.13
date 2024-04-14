#include<iostream>
#include<string>
#include<map>
#include<unordered_map>
#include<algorithm>
using namespace std;

 struct ListNode {
    int val;
     ListNode *next;
   ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     //nums1.resize(nums1.size() + nums2.size());
     nums1.insert(nums1.end(), nums2.begin(), nums2.end());
     sort(nums1.begin(), nums1.end());
     int mid = nums1.size() / 2;
     if (nums1.size() % 2 == 0)
         return((double)nums1[mid] + (double)nums1[mid + 1]) / 2;
     else
         return double(nums1[mid]);
 }
 int main()
 {
     vector<int>v1, v2;
     v1.push_back(1);
     v1.push_back(3);
     v2.push_back(2);
     double b = findMedianSortedArrays(v1, v2);
     return 0;
 }
 //class Solution {
 //public:
 //    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
 //        ListNode* head = nullptr, * tail = nullptr;
 //        int carry = 0;
 //        while (l1 || l2) {
 //            int n1 = l1 ? l1->val : 0;
 //            int n2 = l2 ? l2->val : 0;
 //            int sum = n1 + n2 + carry;
 //            if (!head) {
 //                head = tail = new ListNode(sum % 10);
 //            }
 //            else {
 //                tail->next = new ListNode(sum % 10);
 //                tail = tail->next;
 //            }
 //            carry = sum / 10;
 //            if (l1) {
 //                l1 = l1->next;
 //            }
 //            if (l2) {
 //                l2 = l2->next;
 //            }
 //        }
 //        if (carry > 0) {
 //            tail->next = new ListNode(carry);
 //        }
 //        return head;
 //    }
 //};
//class Solution {
//public:
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        int flag = 0;
//        ListNode* list1=new ListNode(l1->val + l2->val + flag);
//        ListNode*head = list1;
//        while (l1 != NULL&&l2!=NULL)
//        {
//            l1 = l1->next;
//            l2 = l2->next;
//            ListNode* list2 = new ListNode(l1->val + l2->val + flag);
//            flag = (l1->val + l2->val + flag) / 10;
//            list1->next = list2;
//            list1 = list2;
//        }
//        while (l1 != NULL)
//        {
//            l1 = l1->next;
//            ListNode* list2 = new ListNode(l1->val);
//            list1->next = list2;
//            list1 = list2;
//        }
//        while (l2 != NULL)
//        {
//            l2 = l2->next;
//            ListNode* list2 = new ListNode(l2->val);
//            list1->next = list2;
//            list1 = list2;
//        }
//        return head;
//    }
//};

