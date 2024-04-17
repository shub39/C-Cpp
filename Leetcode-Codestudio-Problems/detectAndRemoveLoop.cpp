/*************************************************

    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/

Node *findStartingPoint(Node *head, Node *meetingPoint) {
  while (head != meetingPoint) {
    head = head->next;
    meetingPoint = meetingPoint->next;
  }
  return meetingPoint;
}

Node *detectLoop(Node *head) {

  Node *slow = head;
  Node *fast = head;
  while (fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) {
      return slow;
    }
  }
  return NULL;
}
Node *removeLoop(Node *head) {
  if (head == NULL || head->next == NULL) {
    return NULL;
  }
  Node *meetingPoint = detectLoop(head);
  if (meetingPoint == NULL) {
    return head;
  } else {
    Node *startingPoint = findStartingPoint(head, meetingPoint);
    Node *start = startingPoint;
    while (start->next != startingPoint) {
      start = start->next;
    }
    start->next = NULL;
    return head;
  }
}
