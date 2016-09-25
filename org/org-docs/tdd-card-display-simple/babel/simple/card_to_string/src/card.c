
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


char card_suit_to_char(enum e_Suit);
char card_no_to_char(enum e_No);
char *
card_to_string(Card c)
{
  char suit = card_suit_to_char(card_suit(c));
  char no = card_no_to_char(card_no(c));
  char *s = (char *) malloc(3);

  s[0] = suit;
  s[1] = no;
  s[2] = '\0';

  return s;
}


static char SuitChars[] =
  {'*', 'C', 'D', 'H', 'S'};
char 
card_suit_to_char(enum e_Suit suit)
{
  return SuitChars[suit];
}


static char NoChars[] =
  {'.', '*', '2', '3', '4', '5', '6', '7', '8', '9',
   '0', 'J', 'Q', 'K', 'A'};
char
card_no_to_char(enum e_No no)
{
  return NoChars[no];
}
