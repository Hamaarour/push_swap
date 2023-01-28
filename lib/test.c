int main ()
{
   int i = -1;
   t_list   *lst = NULL;
   while (++i < 5)
   {
      ft_lstadd_back(&lst, ft_lstnew(i));
   }
   t_list *new = ft_lstnew(100);
   ft_lstadd_front(&lst, new);
   while(lst)
   {
      printf("%d\n", lst->value);
      lst = lst->next;
      
   }
}