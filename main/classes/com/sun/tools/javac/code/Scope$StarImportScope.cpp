#include <com/sun/tools/javac/code/Scope$StarImportScope.h>

#include <com/sun/tools/javac/code/Scope$CompoundScope.h>
#include <com/sun/tools/javac/code/Scope$FilterImportScope.h>
#include <com/sun/tools/javac/code/Scope$ImportFilter.h>
#include <com/sun/tools/javac/code/Scope$ImportScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/tree/JCTree$JCImport.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/Iterator.h>
#include <java/util/function/BiConsumer.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$CompoundScope = ::com::sun::tools::javac::code::Scope$CompoundScope;
using $Scope$FilterImportScope = ::com::sun::tools::javac::code::Scope$FilterImportScope;
using $Scope$ImportFilter = ::com::sun::tools::javac::code::Scope$ImportFilter;
using $Scope$ImportScope = ::com::sun::tools::javac::code::Scope$ImportScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Types = ::com::sun::tools::javac::code::Types;
using $JCTree$JCImport = ::com::sun::tools::javac::tree::JCTree$JCImport;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $BiConsumer = ::java::util::function::BiConsumer;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Scope$StarImportScope_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$StarImportScope::*)($Symbol*)>(&Scope$StarImportScope::init$))},
	{"importAll", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Scope$ImportFilter;Lcom/sun/tools/javac/tree/JCTree$JCImport;Ljava/util/function/BiConsumer;)V", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Scope$ImportFilter;Lcom/sun/tools/javac/tree/JCTree$JCImport;Ljava/util/function/BiConsumer<Lcom/sun/tools/javac/tree/JCTree$JCImport;Lcom/sun/tools/javac/code/Symbol$CompletionFailure;>;)V", $PUBLIC},
	{"isFilled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Scope$StarImportScope_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$StarImportScope", "com.sun.tools.javac.code.Scope", "StarImportScope", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Scope$ImportScope", "com.sun.tools.javac.code.Scope", "ImportScope", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Scope$StarImportScope_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Scope$StarImportScope",
	"com.sun.tools.javac.code.Scope$ImportScope",
	nullptr,
	nullptr,
	_Scope$StarImportScope_MethodInfo_,
	nullptr,
	nullptr,
	_Scope$StarImportScope_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$StarImportScope($Class* clazz) {
	return $of($alloc(Scope$StarImportScope));
}

void Scope$StarImportScope::init$($Symbol* owner) {
	$Scope$ImportScope::init$(owner);
}

void Scope$StarImportScope::importAll($Types* types, $Scope* origin, $Scope$ImportFilter* filter, $JCTree$JCImport* imp, $BiConsumer* cfHandler) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->subScopes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Scope, existing, $cast($Scope, i$->next()));
			{
				$Assert::check($instanceOf($Scope$FilterImportScope, existing));
				$var($Scope$FilterImportScope, fis, $cast($Scope$FilterImportScope, existing));
				if ($nc(fis)->origin == origin && fis->filter == filter && $nc(fis->imp)->staticImport == $nc(imp)->staticImport) {
					return;
				}
			}
		}
	}
	prependSubScope($$new($Scope$FilterImportScope, types, origin, nullptr, filter, imp, cfHandler));
}

bool Scope$StarImportScope::isFilled() {
	return $nc(this->subScopes)->nonEmpty();
}

Scope$StarImportScope::Scope$StarImportScope() {
}

$Class* Scope$StarImportScope::load$($String* name, bool initialize) {
	$loadClass(Scope$StarImportScope, name, initialize, &_Scope$StarImportScope_ClassInfo_, allocate$Scope$StarImportScope);
	return class$;
}

$Class* Scope$StarImportScope::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com