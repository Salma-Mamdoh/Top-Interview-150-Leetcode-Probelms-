# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if list1==None:
            return list2
        if list2==None:
            return list1
        
        curr1=list1
        curr2=list2
        if curr1.val <=curr2.val:
            merged=curr1
            curr1=curr1.next
        else:
            merged=curr2
            curr2=curr2.next
        
        current_node = merged

        # Traverse both lists and attach nodes to the new list
        while curr1 and curr2:
            if curr1.val <= curr2.val:
                current_node.next = curr1
                curr1 = curr1.next
            else:
                current_node.next = curr2
                curr2 = curr2.next
            current_node = current_node.next

        # Attach remaining nodes
        if curr1:
            current_node.next = curr1
        if curr2:
            current_node.next = curr2

        return merged
