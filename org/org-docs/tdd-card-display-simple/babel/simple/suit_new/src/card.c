
// src/card.c
# include <string.h>
# include <card.h>

enum e_Suit
card_suit_new_from_string(char *suit_str)
{
  if (strcmp("CLUB", suit_str)==0)
    return CLUB;
  if (strcmp("DIAMOND", suit_str)==0)
    return DIAMOND;
  if (strcmp("HEART", suit_str)==0)
    return HEART;
  if (strcmp("SPADE", suit_str)==0)
    return SPADE;
  return 0;
}
