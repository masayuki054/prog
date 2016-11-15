// src/card.c
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <card.h>

int
card_compare(Card a, Card b)
{
  if (card_no(a)>card_no(b))
    return 1;
  if (card_no(a)<card_no(b))
    return -1;
  if (card_suit(a)>card_suit(b))
    return 1;
  if (card_suit(a)<card_suit(b))
    return -1;
  return 0;
}

Card *                                                                                         
cards_sort(Card *cards, int no_of_cards)
{
  int i;
  Card *pos;

  for(pos=cards, i=0; i<no_of_cards; i++, pos++)
    {
      Card *cur;
      int j;

      for(j=i+1,cur=pos+1; j<no_of_cards; j++, cur++)
        {
//        if (card_compare(*pos,*cur)<=0)  2015.12.08 fixed
          if (card_compare(*pos,*cur)>=0)
            {
              Card temp = *pos;
              *pos = *cur;
              *cur = temp;
            }
	}
    }
  return cards;
}
