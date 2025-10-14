#ifndef _com_sun_tools_javac_util_Pair_h_
#define _com_sun_tools_javac_util_Pair_h_
//$ class com.sun.tools.javac.util.Pair
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export Pair : public ::java::lang::Object {
	$class(Pair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Pair();
	void init$(Object$* fst, Object$* snd);
	virtual bool equals(Object$* other) override;
	virtual int32_t hashCode() override;
	static ::com::sun::tools::javac::util::Pair* of(Object$* a, Object$* b);
	virtual $String* toString() override;
	$Object* fst = nullptr;
	$Object* snd = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Pair_h_