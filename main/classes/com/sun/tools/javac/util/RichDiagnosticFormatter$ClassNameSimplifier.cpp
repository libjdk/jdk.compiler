#include <com/sun/tools/javac/util/RichDiagnosticFormatter$ClassNameSimplifier.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter.h>
#include <java/lang/CharSequence.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef CLASS
#undef TYP

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $RichDiagnosticFormatter = ::com::sun::tools::javac::util::RichDiagnosticFormatter;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $1Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _RichDiagnosticFormatter$ClassNameSimplifier_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/util/RichDiagnosticFormatter;", nullptr, $FINAL | $SYNTHETIC, $field(RichDiagnosticFormatter$ClassNameSimplifier, this$0)},
	{"nameClashes", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol;>;>;", 0, $field(RichDiagnosticFormatter$ClassNameSimplifier, nameClashes)},
	{}
};

$MethodInfo _RichDiagnosticFormatter$ClassNameSimplifier_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/RichDiagnosticFormatter;)V", nullptr, $PROTECTED, $method(static_cast<void(RichDiagnosticFormatter$ClassNameSimplifier::*)($RichDiagnosticFormatter*)>(&RichDiagnosticFormatter$ClassNameSimplifier::init$))},
	{"addUsage", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PROTECTED},
	{"simplify", "(Lcom/sun/tools/javac/code/Symbol;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RichDiagnosticFormatter$ClassNameSimplifier_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.RichDiagnosticFormatter$ClassNameSimplifier", "com.sun.tools.javac.util.RichDiagnosticFormatter", "ClassNameSimplifier", $PROTECTED},
	{}
};

$ClassInfo _RichDiagnosticFormatter$ClassNameSimplifier_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.RichDiagnosticFormatter$ClassNameSimplifier",
	"java.lang.Object",
	nullptr,
	_RichDiagnosticFormatter$ClassNameSimplifier_FieldInfo_,
	_RichDiagnosticFormatter$ClassNameSimplifier_MethodInfo_,
	nullptr,
	nullptr,
	_RichDiagnosticFormatter$ClassNameSimplifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.RichDiagnosticFormatter"
};

$Object* allocate$RichDiagnosticFormatter$ClassNameSimplifier($Class* clazz) {
	return $of($alloc(RichDiagnosticFormatter$ClassNameSimplifier));
}

void RichDiagnosticFormatter$ClassNameSimplifier::init$($RichDiagnosticFormatter* this$0) {
	$set(this, this$0, this$0);
	$set(this, nameClashes, $new($HashMap));
}

void RichDiagnosticFormatter$ClassNameSimplifier::addUsage($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($Name, n, $cast($Name, $nc(sym)->getSimpleName()));
	$var($List, conflicts, $cast($List, $nc(this->nameClashes)->get(n)));
	if (conflicts == nullptr) {
		$assign(conflicts, $List::nil());
	}
	if (!$nc(conflicts)->contains(sym)) {
		$nc(this->nameClashes)->put(n, $(conflicts->append(sym)));
	}
}

$String* RichDiagnosticFormatter$ClassNameSimplifier::simplify($Symbol* s) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc($($nc(s)->getQualifiedName()))->toString());
	bool var$0 = !$nc(s->type)->isCompound();
	if (var$0 && !$nc(s->type)->isPrimitive()) {
		$var($List, conflicts, $cast($List, $nc(this->nameClashes)->get($(s->getSimpleName()))));
		bool var$1 = conflicts == nullptr;
		if (!var$1) {
			bool var$2 = $nc(conflicts)->size() == 1;
			var$1 = (var$2 && conflicts->contains(s));
		}
		if (var$1) {
			$var($List, l, $List::nil());
			$var($Symbol, s2, s);
			while (true) {
				$init($TypeTag);
				bool var$3 = $nc($nc(s2)->type)->hasTag($TypeTag::CLASS);
				$init($Kinds$Kind);
				if (!(var$3 && $nc($($nc(s2->type)->getEnclosingType()))->hasTag($TypeTag::CLASS) && $nc(s2->owner)->kind == $Kinds$Kind::TYP)) {
					break;
				}
				{
					$assign(l, $nc(l)->prepend($(s2->getSimpleName())));
					$assign(s2, s2->owner);
				}
			}
			$assign(l, $nc(l)->prepend($($nc(s2)->getSimpleName())));
			$var($StringBuilder, buf, $new($StringBuilder));
			$var($String, sep, ""_s);
			{
				$var($Iterator, i$, l->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Name, n2, $cast($Name, i$->next()));
					{
						buf->append(sep);
						buf->append(static_cast<$CharSequence*>(n2));
						$assign(sep, "."_s);
					}
				}
			}
			$assign(name, buf->toString());
		}
	}
	return name;
}

RichDiagnosticFormatter$ClassNameSimplifier::RichDiagnosticFormatter$ClassNameSimplifier() {
}

$Class* RichDiagnosticFormatter$ClassNameSimplifier::load$($String* name, bool initialize) {
	$loadClass(RichDiagnosticFormatter$ClassNameSimplifier, name, initialize, &_RichDiagnosticFormatter$ClassNameSimplifier_ClassInfo_, allocate$RichDiagnosticFormatter$ClassNameSimplifier);
	return class$;
}

$Class* RichDiagnosticFormatter$ClassNameSimplifier::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com