#ifndef _com_sun_tools_javac_util_Position_h_
#define _com_sun_tools_javac_util_Position_h_
//$ class com.sun.tools.javac.util.Position
//$ extends java.lang.Object

#include <java/lang/Array.h>
#include <java/lang/Integer.h>

#pragma push_macro("FIRSTCOLUMN")
#undef FIRSTCOLUMN
#pragma push_macro("FIRSTLINE")
#undef FIRSTLINE
#pragma push_macro("FIRSTPOS")
#undef FIRSTPOS
#pragma push_macro("LINESHIFT")
#undef LINESHIFT
#pragma push_macro("MAXCOLUMN")
#undef MAXCOLUMN
#pragma push_macro("MAXLINE")
#undef MAXLINE
#pragma push_macro("MAXPOS")
#undef MAXPOS
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("NOPOS")
#undef NOPOS
#pragma push_macro("SIZE")
#undef SIZE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Position$LineMap;
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

class $import Position : public ::java::lang::Object {
	$class(Position, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Position();
	void init$();
	static int32_t encodePosition(int32_t line, int32_t col);
	static ::com::sun::tools::javac::util::Position$LineMap* makeLineMap($chars* src, int32_t max, bool expandTabs);
	static const int32_t NOPOS = (-1);
	static const int32_t FIRSTPOS = 0;
	static const int32_t FIRSTLINE = 1;
	static const int32_t FIRSTCOLUMN = 1;
	static const int32_t LINESHIFT = 10;
	static const int32_t MAXCOLUMN = 1023; // (1 << LINESHIFT) - 1
	static const int32_t MAXLINE = 4194303; // (1 << (::java::lang::Integer::SIZE - LINESHIFT)) - 1
	static const int32_t MAXPOS = ::java::lang::Integer::MAX_VALUE;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("FIRSTCOLUMN")
#pragma pop_macro("FIRSTLINE")
#pragma pop_macro("FIRSTPOS")
#pragma pop_macro("LINESHIFT")
#pragma pop_macro("MAXCOLUMN")
#pragma pop_macro("MAXLINE")
#pragma pop_macro("MAXPOS")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("NOPOS")
#pragma pop_macro("SIZE")

#endif // _com_sun_tools_javac_util_Position_h_