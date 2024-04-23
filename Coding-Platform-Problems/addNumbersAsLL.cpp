// This Doesnt work for extremely large numbers!! like 400 digits long
class Solution {
private:
  long long int getNo(struct Node *num) {
    long long int sum = 0;
    struct Node *temp = num;
    while (temp != NULL) {
      sum = (sum * 10) + temp->data;
      temp = temp->next;
    }
    return sum;
  }
  struct Node *reverse(struct Node *head) {
    struct Node *curr = head;
    struct Node *prev = NULL;
    struct Node *next = NULL;
    while (curr != NULL) {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    return prev;
  }

public:
  struct Node *addTwoLists(struct Node *num1, struct Node *num2) {
    int sum1 = getNo(num1);
    int sum2 = getNo(num2);
    int sum = sum1 + sum2;
    struct Node *ans = new struct Node(0);
    struct Node *head = ans;
    while (sum != 0) {
      ans->data = sum % 10;
      sum = sum / 10;
      if (sum != 0) {
        ans->next = new struct Node(0);
        ans = ans->next;
      } else
        break;
    }
    return reverse(head);
  }
};
