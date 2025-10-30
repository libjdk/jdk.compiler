#include <com/sun/tools/javac/util/DefinedBy.h>

#include <com/sun/tools/javac/util/DefinedBy$Api.h>
#include <jcpp.h>

using $DefinedBy$Api = ::com::sun::tools::javac::util::DefinedBy$Api;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$Attribute DefinedBy_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'-'}
};

$NamedAttribute DefinedBy_Attribute_var$0[] = {
	{"value", '[', DefinedBy_Attribute_var$1},
	{}
};

$NamedAttribute DefinedBy_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; SOURCE"},
	{}
};

$CompoundAttribute _DefinedBy_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", DefinedBy_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", DefinedBy_Attribute_var$2},
	{}
};

$MethodInfo _DefinedBy_MethodInfo_[] = {
	{"value", "()Lcom/sun/tools/javac/util/DefinedBy$Api;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DefinedBy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.DefinedBy$Api", "com.sun.tools.javac.util.DefinedBy", "Api", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _DefinedBy_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"com.sun.tools.javac.util.DefinedBy",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_DefinedBy_MethodInfo_,
	nullptr,
	nullptr,
	_DefinedBy_InnerClassesInfo_,
	_DefinedBy_Annotations_,
	nullptr,
	"com.sun.tools.javac.util.DefinedBy$Api"
};

$Object* allocate$DefinedBy($Class* clazz) {
	return $of($alloc(DefinedBy));
}

$Class* DefinedBy::load$($String* name, bool initialize) {
	$loadClass(DefinedBy, name, initialize, &_DefinedBy_ClassInfo_, allocate$DefinedBy);
	return class$;
}

$Class* DefinedBy::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com