/*class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        if not self.head:
            self.head = Node(data)
        else:
            current = self.head
            while current.next:
                current = current.next
            current.next = Node(data)

def search_linked_list(head, x):
    current = head
    while current:
        if current.data == x:
            return True
        elif current.data > x:
            return search_linked_list(current.next, x)
        else:
            current = current.next

    return False

# Example usage:
linked_list = LinkedList()
linked_list.append(1)
linked_list.append(2)
linked_list.append(3)
linked_list.append(4)
linked_list.append(5)

print(search_linked_list(linked_list.head, 3))  # Output: True
print(search_linked_list(linked_list.head, 6))  # Output: False
*/