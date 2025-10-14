#ifndef _com_sun_source_util_TaskEvent$Kind_h_
#define _com_sun_source_util_TaskEvent$Kind_h_
//$ class com.sun.source.util.TaskEvent$Kind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ANALYZE")
#undef ANALYZE
#pragma push_macro("ANNOTATION_PROCESSING")
#undef ANNOTATION_PROCESSING
#pragma push_macro("ANNOTATION_PROCESSING_ROUND")
#undef ANNOTATION_PROCESSING_ROUND
#pragma push_macro("COMPILATION")
#undef COMPILATION
#pragma push_macro("ENTER")
#undef ENTER
#pragma push_macro("GENERATE")
#undef GENERATE
#pragma push_macro("PARSE")
#undef PARSE

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class $export TaskEvent$Kind : public ::java::lang::Enum {
	$class(TaskEvent$Kind, 0, ::java::lang::Enum)
public:
	TaskEvent$Kind();
	static $Array<::com::sun::source::util::TaskEvent$Kind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::source::util::TaskEvent$Kind* valueOf($String* name);
	static $Array<::com::sun::source::util::TaskEvent$Kind>* values();
	static ::com::sun::source::util::TaskEvent$Kind* PARSE;
	static ::com::sun::source::util::TaskEvent$Kind* ENTER;
	static ::com::sun::source::util::TaskEvent$Kind* ANALYZE;
	static ::com::sun::source::util::TaskEvent$Kind* GENERATE;
	static ::com::sun::source::util::TaskEvent$Kind* ANNOTATION_PROCESSING;
	static ::com::sun::source::util::TaskEvent$Kind* ANNOTATION_PROCESSING_ROUND;
	static ::com::sun::source::util::TaskEvent$Kind* COMPILATION;
	static $Array<::com::sun::source::util::TaskEvent$Kind>* $VALUES;
};

			} // util
		} // source
	} // sun
} // com

#pragma pop_macro("ANALYZE")
#pragma pop_macro("ANNOTATION_PROCESSING")
#pragma pop_macro("ANNOTATION_PROCESSING_ROUND")
#pragma pop_macro("COMPILATION")
#pragma pop_macro("ENTER")
#pragma pop_macro("GENERATE")
#pragma pop_macro("PARSE")

#endif // _com_sun_source_util_TaskEvent$Kind_h_