class Node:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.right = right
        self.left = left

    def printTree(self):
        my_list = []
        self.print_helper(my_list)
        for item in my_list:
            if item == my_list[-1]:
                print(item)
            else:
                print(item + "->")

    def print_helper(self, my_list):
        if(self == None):
            return my_list
        my_list.append(self.val)
        self = self.left
        self.print_helper(my_list)
        self = self.right
        self.print_helper(my_list)


def main():
    root = Node(3, Node(4), Node(5))
    root.printTree()


if __name__ == "__main__":
    main()
