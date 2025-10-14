#ifndef _com_sun_tools_javac_util_Bits_h_
#define _com_sun_tools_javac_util_Bits_h_
//$ class com.sun.tools.javac.util.Bits
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Bits$BitsState;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export Bits : public ::java::lang::Object {
	$class(Bits, 0, ::java::lang::Object)
public:
	Bits();
	void init$();
	void init$(::com::sun::tools::javac::util::Bits* someBits);
	void init$(bool reset);
	void init$($ints* bits, ::com::sun::tools::javac::util::Bits$BitsState* initState);
	virtual ::com::sun::tools::javac::util::Bits* andSet(::com::sun::tools::javac::util::Bits* xs);
	virtual ::com::sun::tools::javac::util::Bits* assign(::com::sun::tools::javac::util::Bits* someBits);
	virtual void clear();
	virtual ::com::sun::tools::javac::util::Bits* diffSet(::com::sun::tools::javac::util::Bits* xs);
	virtual ::com::sun::tools::javac::util::Bits* dup();
	virtual $ints* dupBits();
	virtual void excl(int32_t x);
	virtual void excludeFrom(int32_t start);
	virtual void incl(int32_t x);
	virtual void inclRange(int32_t start, int32_t limit);
	virtual void internalAndSet(::com::sun::tools::javac::util::Bits* xs);
	virtual void internalReset();
	virtual bool isMember(int32_t x);
	virtual bool isReset();
	virtual int32_t nextBit(int32_t x);
	virtual ::com::sun::tools::javac::util::Bits* orSet(::com::sun::tools::javac::util::Bits* xs);
	virtual void reset();
	virtual void sizeTo(int32_t len);
	virtual $String* toString() override;
	static int32_t trailingZeroBits(int32_t x);
	virtual ::com::sun::tools::javac::util::Bits* xorSet(::com::sun::tools::javac::util::Bits* xs);
	static const int32_t wordlen = 32;
	static const int32_t wordshift = 5;
	static const int32_t wordmask = 31; // wordlen - 1
	$ints* bits = nullptr;
	static $ints* unassignedBits;
	::com::sun::tools::javac::util::Bits$BitsState* currentState = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Bits_h_