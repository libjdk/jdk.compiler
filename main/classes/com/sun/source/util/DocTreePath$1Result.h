#ifndef _com_sun_source_util_DocTreePath$1Result_h_
#define _com_sun_source_util_DocTreePath$1Result_h_
//$ class com.sun.source.util.DocTreePath$1Result
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class DocTreePath;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class DocTreePath$1Result : public ::java::lang::Error {
	$class(DocTreePath$1Result, $NO_CLASS_INIT, ::java::lang::Error)
public:
	DocTreePath$1Result();
	void init$(::com::sun::source::util::DocTreePath* path);
	static const int64_t serialVersionUID = (int64_t)0xAD89763BB0F151E7;
	::com::sun::source::util::DocTreePath* path = nullptr;
	DocTreePath$1Result(const DocTreePath$1Result& e);
	virtual void throw$() override;
	inline DocTreePath$1Result* operator ->() {
		return (DocTreePath$1Result*)throwing$;
	}
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_DocTreePath$1Result_h_