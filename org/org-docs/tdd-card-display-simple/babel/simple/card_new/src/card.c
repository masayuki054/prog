
// src/card.c
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <card.h>

enum e_Suit
card_suit_new_from_string(char *suit_str)
{
  if (strcmp("CLUB",suit_str)==0)
    return CLUB;
  if (strcmp("DIAMOND",suit_str)==0)
    return DIAMOND;
  if (strcmp("HEART",suit_str)==0)
    return HEART;
  if (strcmp("SPADE",suit_str)==0)
    return SPADE;
  return 0;
}

enum e_No
card_no_new_from_string(char *no_str)
{
  int no = atoi(no_str);

  if (no==1)  no = ACE;

  if ( no < TWO && ACE < no )
    {
      fprintf(stderr, "不適な数値 (%s)!\n", no_str);
    };
  return (enum e_No)no;
}

Card
card_new(enum e_Suit suit, enum e_No no)
{
  Card new;

  new.suit = suit;
  new.no = no;
  return new;
}

enum e_Suit
card_suit(Card c)
{
  return c.suit;
}

enum e_No
card_no(Card c)
{
  return c.no;
}
