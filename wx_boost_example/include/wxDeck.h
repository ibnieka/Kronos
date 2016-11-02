#ifndef WXDECK_H
#define WXDECK_H

#include <wx/wx.h>
#include <unordered_map>
#include <string>

enum Turn {
	FIRST,
	SECOND,
	THIRD,
	FOURTH
};

//enum id for all cards
//F is for full card
//clipped card is used far more often
enum Card_ID {
	BLANK,
	CARD_BACK,
	C01,
	C02,
	C03,
	C04,
	C05,
	C06,
	C07,
	C08,
	C09,
	C10,
	C11,
	C12,
	C13,
	D01,
	D02,
	D03,
	D04,
	D05,
	D06,
	D07,
	D08,
	D09,
	D10,
	D11,
	D12,
	D13,
	H01,
	H02,
	H03,
	H04,
	H05,
	H06,
	H07,
	H08,
	H09,
	H10,
	H11,
	H12,
	H13,
	S01,
	S02,
	S03,
	S04,
	S05,
	S06,
	S07,
	S08,
	S09,
	S10,
	S11,
	S12,
	S13,
	BLANK_F,
	CARD_BACK_F,
	C01F,
	C02F,
	C03F,
	C04F,
	C05F,
	C06F,
	C07F,
	C08F,
	C09F,
	C10F,
	C11F,
	C12F,
	C13F,
	D01F,
	D02F,
	D03F,
	D04F,
	D05F,
	D06F,
	D07F,
	D08F,
	D09F,
	D10F,
	D11F,
	D12F,
	D13F,
	H01F,
	H02F,
	H03F,
	H04F,
	H05F,
	H06F,
	H07F,
	H08F,
	H09F,
	H10F,
	H11F,
	H12F,
	H13F,
	S01F,
	S02F,
	S03F,
	S04F,
	S05F,
	S06F,
	S07F,
	S08F,
	S09F,
	S10F,
	S11F,
	S12F,
	S13F
};

class wxDeck
{
	public: 
		wxDeck();
		wxString operator[](Card_ID id) { return (wxString)m_hash[(int)id]; }

	private:
		std::unordered_map<int, std::string> m_hash;
};

#endif /* ifndef WXDECK_H */
