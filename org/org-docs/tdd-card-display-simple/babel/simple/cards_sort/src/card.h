// src/card.h
# include <string.h>

enum e_Suit {CLUB=1,DIAMOND,HEART,SPADE};
enum e_Suit card_suit_new_from_string(char *);

enum e_No { TWO=2, THREE, FOUR, FIVE,
	    SIX, SEVEN, EIGHT, NINE, TEN,
	    JACK, QUEEN, KING, ACE};
enum e_No card_no_new_from_string(char *);

struct _Card {
  enum e_Suit suit;
  enum e_No no;
};

typedef struct _Card Card;

enum e_Suit card_suit(Card);
enum e_No card_no(Card);
Card card_new(enum e_Suit, enum e_No);
