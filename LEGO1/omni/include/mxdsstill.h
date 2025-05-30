#ifndef MXDSSTILL_H
#define MXDSSTILL_H

#include "mxdsmediaaction.h"

// VTABLE: LEGO1 0x100dce60
// VTABLE: BETA10 0x101c2bf8
// SIZE 0xb8
class MxDSStill : public MxDSMediaAction {
public:
	MxDSStill();
	MxDSStill(MxDSStill& p_dsStill);
	~MxDSStill() override;

	void CopyFrom(MxDSStill& p_dsStill);
	MxDSStill& operator=(MxDSStill& p_dsStill);

	// FUNCTION: LEGO1 0x100c9930
	// FUNCTION: BETA10 0x1015dad0
	const char* ClassName() const override // vtable+0x0c
	{
		// STRING: LEGO1 0x101025fc
		return "MxDSStill";
	}

	// FUNCTION: LEGO1 0x100c9940
	// FUNCTION: BETA10 0x1015daf0
	MxBool IsA(const char* p_name) const override // vtable+0x10
	{
		return !strcmp(p_name, MxDSStill::ClassName()) || MxDSMediaAction::IsA(p_name);
	}

	MxDSAction* Clone() override; // vtable+0x2c

	// SYNTHETIC: LEGO1 0x100c9a50
	// SYNTHETIC: BETA10 0x1015db50
	// MxDSStill::`scalar deleting destructor'
};

#endif // MXDSSTILL_H
