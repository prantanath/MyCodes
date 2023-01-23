class Node(object):
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

class BinaryTree(object):
    def __init__(self, root):
        self.root = Node(root)
        
        
    def src_helper(self,node,val):
        if node and node.value==val:
            return True
        elif node:
            return self.src_helper(node.left,val) or self.src_helper(node.right,val)
        else:
            return False
            
    def search(self, find_val):
        """Return True if the value
        is in the tree, return
        False otherwise."""
        if self.root:
            if self.root.value==find_val:
                return True
            else:
                return self.preorder_search(self.root.left,find_val) or self.preorder_search(self.root.right,find_val)
        return False
        
    

    def print_tree(self):
        """Print out all tree nodes
        as they are visited in
        a pre-order traversal."""
        traversal = self.preorder_print(self.root)
        return traversal[:-1]

    def preorder_search(self, node, val):
        if node and node.value==val:
            return True
        elif node:
            return self.preorder_search(node.left,val) or self.preorder_search(node.right,val)
        else:
            return False

    def preorder_print(self, start):
        """Helper method - use this to create a 
        recursive print solution."""
        traversal = ""
        if start:
            traversal += str(start.value) + "-"
            traversal += self.preorder_print(start.left)
            traversal += self.preorder_print(start.right)
        return traversal


# Set up tree
tree = BinaryTree(1)
tree.root.left = Node(2)
tree.root.right = Node(3)
tree.root.left.left = Node(4)
tree.root.left.right = Node(5)

# Test search
# Should be True
print (tree.search(4))
# Should be False
print (tree.search(6))

# Test print_tree
# Should be 1-2-4-5-3
print (tree.print_tree())