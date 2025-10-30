#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>

#include <com/sun/tools/javac/util/Dependencies.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CLASS_READER
#undef HEADER_PHASE
#undef HIERARCHY_PHASE
#undef IMPORTS_PHASE
#undef MEMBERS_PHASE
#undef MEMBER_ENTER
#undef OTHER
#undef PERMITS_PHASE
#undef RECORD_PHASE

using $Dependencies$CompletionCauseArray = $Array<::com::sun::tools::javac::util::Dependencies$CompletionCause>;
using $Dependencies = ::com::sun::tools::javac::util::Dependencies;
using $GraphUtils$DependencyKind = ::com::sun::tools::javac::util::GraphUtils$DependencyKind;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Dependencies$CompletionCause_FieldInfo_[] = {
	{"CLASS_READER", "Lcom/sun/tools/javac/util/Dependencies$CompletionCause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dependencies$CompletionCause, CLASS_READER)},
	{"HEADER_PHASE", "Lcom/sun/tools/javac/util/Dependencies$CompletionCause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dependencies$CompletionCause, HEADER_PHASE)},
	{"HIERARCHY_PHASE", "Lcom/sun/tools/javac/util/Dependencies$CompletionCause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dependencies$CompletionCause, HIERARCHY_PHASE)},
	{"IMPORTS_PHASE", "Lcom/sun/tools/javac/util/Dependencies$CompletionCause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dependencies$CompletionCause, IMPORTS_PHASE)},
	{"MEMBER_ENTER", "Lcom/sun/tools/javac/util/Dependencies$CompletionCause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dependencies$CompletionCause, MEMBER_ENTER)},
	{"RECORD_PHASE", "Lcom/sun/tools/javac/util/Dependencies$CompletionCause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dependencies$CompletionCause, RECORD_PHASE)},
	{"MEMBERS_PHASE", "Lcom/sun/tools/javac/util/Dependencies$CompletionCause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dependencies$CompletionCause, MEMBERS_PHASE)},
	{"PERMITS_PHASE", "Lcom/sun/tools/javac/util/Dependencies$CompletionCause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dependencies$CompletionCause, PERMITS_PHASE)},
	{"OTHER", "Lcom/sun/tools/javac/util/Dependencies$CompletionCause;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Dependencies$CompletionCause, OTHER)},
	{"$VALUES", "[Lcom/sun/tools/javac/util/Dependencies$CompletionCause;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Dependencies$CompletionCause, $VALUES)},
	{}
};

$MethodInfo _Dependencies$CompletionCause_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/tools/javac/util/Dependencies$CompletionCause;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Dependencies$CompletionCauseArray*(*)()>(&Dependencies$CompletionCause::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Dependencies$CompletionCause::*)($String*,int32_t)>(&Dependencies$CompletionCause::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/Dependencies$CompletionCause;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Dependencies$CompletionCause*(*)($String*)>(&Dependencies$CompletionCause::valueOf))},
	{"values", "()[Lcom/sun/tools/javac/util/Dependencies$CompletionCause;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Dependencies$CompletionCauseArray*(*)()>(&Dependencies$CompletionCause::values))},
	{}
};

$InnerClassInfo _Dependencies$CompletionCause_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Dependencies$CompletionCause", "com.sun.tools.javac.util.Dependencies", "CompletionCause", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"com.sun.tools.javac.util.GraphUtils$DependencyKind", "com.sun.tools.javac.util.GraphUtils", "DependencyKind", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Dependencies$CompletionCause_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.tools.javac.util.Dependencies$CompletionCause",
	"java.lang.Enum",
	"com.sun.tools.javac.util.GraphUtils$DependencyKind",
	_Dependencies$CompletionCause_FieldInfo_,
	_Dependencies$CompletionCause_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/tools/javac/util/Dependencies$CompletionCause;>;Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;",
	nullptr,
	_Dependencies$CompletionCause_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Dependencies"
};

$Object* allocate$Dependencies$CompletionCause($Class* clazz) {
	return $of($alloc(Dependencies$CompletionCause));
}

$String* Dependencies$CompletionCause::toString() {
	 return this->$Enum::toString();
}

bool Dependencies$CompletionCause::equals(Object$* arg0) {
	 return this->$Enum::equals(arg0);
}

int32_t Dependencies$CompletionCause::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* Dependencies$CompletionCause::clone() {
	 return this->$Enum::clone();
}

void Dependencies$CompletionCause::finalize() {
	this->$Enum::finalize();
}

Dependencies$CompletionCause* Dependencies$CompletionCause::CLASS_READER = nullptr;
Dependencies$CompletionCause* Dependencies$CompletionCause::HEADER_PHASE = nullptr;
Dependencies$CompletionCause* Dependencies$CompletionCause::HIERARCHY_PHASE = nullptr;
Dependencies$CompletionCause* Dependencies$CompletionCause::IMPORTS_PHASE = nullptr;
Dependencies$CompletionCause* Dependencies$CompletionCause::MEMBER_ENTER = nullptr;
Dependencies$CompletionCause* Dependencies$CompletionCause::RECORD_PHASE = nullptr;
Dependencies$CompletionCause* Dependencies$CompletionCause::MEMBERS_PHASE = nullptr;
Dependencies$CompletionCause* Dependencies$CompletionCause::PERMITS_PHASE = nullptr;
Dependencies$CompletionCause* Dependencies$CompletionCause::OTHER = nullptr;
$Dependencies$CompletionCauseArray* Dependencies$CompletionCause::$VALUES = nullptr;

$Dependencies$CompletionCauseArray* Dependencies$CompletionCause::$values() {
	$init(Dependencies$CompletionCause);
	return $new($Dependencies$CompletionCauseArray, {
		Dependencies$CompletionCause::CLASS_READER,
		Dependencies$CompletionCause::HEADER_PHASE,
		Dependencies$CompletionCause::HIERARCHY_PHASE,
		Dependencies$CompletionCause::IMPORTS_PHASE,
		Dependencies$CompletionCause::MEMBER_ENTER,
		Dependencies$CompletionCause::RECORD_PHASE,
		Dependencies$CompletionCause::MEMBERS_PHASE,
		Dependencies$CompletionCause::PERMITS_PHASE,
		Dependencies$CompletionCause::OTHER
	});
}

$Dependencies$CompletionCauseArray* Dependencies$CompletionCause::values() {
	$init(Dependencies$CompletionCause);
	return $cast($Dependencies$CompletionCauseArray, Dependencies$CompletionCause::$VALUES->clone());
}

Dependencies$CompletionCause* Dependencies$CompletionCause::valueOf($String* name) {
	$init(Dependencies$CompletionCause);
	return $cast(Dependencies$CompletionCause, $Enum::valueOf(Dependencies$CompletionCause::class$, name));
}

void Dependencies$CompletionCause::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Dependencies$CompletionCause($Class* class$) {
	$assignStatic(Dependencies$CompletionCause::CLASS_READER, $new(Dependencies$CompletionCause, "CLASS_READER"_s, 0));
	$assignStatic(Dependencies$CompletionCause::HEADER_PHASE, $new(Dependencies$CompletionCause, "HEADER_PHASE"_s, 1));
	$assignStatic(Dependencies$CompletionCause::HIERARCHY_PHASE, $new(Dependencies$CompletionCause, "HIERARCHY_PHASE"_s, 2));
	$assignStatic(Dependencies$CompletionCause::IMPORTS_PHASE, $new(Dependencies$CompletionCause, "IMPORTS_PHASE"_s, 3));
	$assignStatic(Dependencies$CompletionCause::MEMBER_ENTER, $new(Dependencies$CompletionCause, "MEMBER_ENTER"_s, 4));
	$assignStatic(Dependencies$CompletionCause::RECORD_PHASE, $new(Dependencies$CompletionCause, "RECORD_PHASE"_s, 5));
	$assignStatic(Dependencies$CompletionCause::MEMBERS_PHASE, $new(Dependencies$CompletionCause, "MEMBERS_PHASE"_s, 6));
	$assignStatic(Dependencies$CompletionCause::PERMITS_PHASE, $new(Dependencies$CompletionCause, "PERMITS_PHASE"_s, 7));
	$assignStatic(Dependencies$CompletionCause::OTHER, $new(Dependencies$CompletionCause, "OTHER"_s, 8));
	$assignStatic(Dependencies$CompletionCause::$VALUES, Dependencies$CompletionCause::$values());
}

Dependencies$CompletionCause::Dependencies$CompletionCause() {
}

$Class* Dependencies$CompletionCause::load$($String* name, bool initialize) {
	$loadClass(Dependencies$CompletionCause, name, initialize, &_Dependencies$CompletionCause_ClassInfo_, clinit$Dependencies$CompletionCause, allocate$Dependencies$CompletionCause);
	return class$;
}

$Class* Dependencies$CompletionCause::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com