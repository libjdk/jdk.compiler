#include <com/sun/tools/javac/code/ClassFinder$1.h>

#include <com/sun/tools/javac/code/ClassFinder.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef CLASS
#undef HAS_RESOURCE
#undef SOURCE

using $ClassFinder = ::com::sun::tools::javac::code::ClassFinder;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Set = ::java::util::Set;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _ClassFinder$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/ClassFinder;", nullptr, $FINAL | $SYNTHETIC, $field(ClassFinder$1, this$0)},
	{"val$kinds", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(ClassFinder$1, val$kinds)},
	{"val$p", "Lcom/sun/tools/javac/code/Symbol$PackageSymbol;", nullptr, $FINAL | $SYNTHETIC, $field(ClassFinder$1, val$p)},
	{"val$listed", "Ljava/lang/Iterable;", nullptr, $FINAL | $SYNTHETIC, $field(ClassFinder$1, val$listed)},
	{"original", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljavax/tools/JavaFileObject;>;", $PRIVATE | $FINAL, $field(ClassFinder$1, original)},
	{"next", "Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE, $field(ClassFinder$1, next$)},
	{}
};

$MethodInfo _ClassFinder$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/ClassFinder;Ljava/lang/Iterable;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljava/util/Set;)V", "()V", 0, $method(static_cast<void(ClassFinder$1::*)($ClassFinder*,$Iterable*,$Symbol$PackageSymbol*,$Set*)>(&ClassFinder$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ClassFinder$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.ClassFinder",
	"list",
	"(Ljavax/tools/JavaFileManager$Location;Lcom/sun/tools/javac/code/Symbol$PackageSymbol;Ljava/lang/String;Ljava/util/Set;)Ljava/lang/Iterable;"
};

$InnerClassInfo _ClassFinder$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.ClassFinder$1", nullptr, nullptr, 0},
	{"javax.tools.JavaFileManager$Location", "javax.tools.JavaFileManager", "Location", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.Symbol$PackageSymbol", "com.sun.tools.javac.code.Symbol", "PackageSymbol", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ClassFinder$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.ClassFinder$1",
	"java.lang.Object",
	"java.util.Iterator",
	_ClassFinder$1_FieldInfo_,
	_ClassFinder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljavax/tools/JavaFileObject;>;",
	&_ClassFinder$1_EnclosingMethodInfo_,
	_ClassFinder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.ClassFinder"
};

$Object* allocate$ClassFinder$1($Class* clazz) {
	return $of($alloc(ClassFinder$1));
}

void ClassFinder$1::init$($ClassFinder* this$0, $Iterable* val$listed, $Symbol$PackageSymbol* val$p, $Set* val$kinds) {
	$set(this, this$0, this$0);
	$set(this, val$listed, val$listed);
	$set(this, val$p, val$p);
	$set(this, val$kinds, val$kinds);
	$set(this, original, $nc(this->val$listed)->iterator());
}

bool ClassFinder$1::hasNext() {
	$useLocalCurrentObjectStackCache();
	if (this->next$ == nullptr) {
		while ($nc(this->original)->hasNext()) {
			$var($JavaFileObject, fo, $cast($JavaFileObject, $nc(this->original)->next()));
			$init($JavaFileObject$Kind);
			bool var$0 = $nc(fo)->getKind() != $JavaFileObject$Kind::CLASS;
			if (var$0 && fo->getKind() != $JavaFileObject$Kind::SOURCE) {
				$nc(this->val$p)->flags_field |= $Flags::HAS_RESOURCE;
			}
			if ($nc(this->val$kinds)->contains($($nc(fo)->getKind()))) {
				$set(this, next$, fo);
				break;
			}
		}
	}
	return this->next$ != nullptr;
}

$Object* ClassFinder$1::next() {
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	$var($JavaFileObject, result, this->next$);
	$set(this, next$, nullptr);
	return $of(result);
}

ClassFinder$1::ClassFinder$1() {
}

$Class* ClassFinder$1::load$($String* name, bool initialize) {
	$loadClass(ClassFinder$1, name, initialize, &_ClassFinder$1_ClassInfo_, allocate$ClassFinder$1);
	return class$;
}

$Class* ClassFinder$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com