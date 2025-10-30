#include <com/sun/tools/javac/code/Scope$FilterImportScope$SymbolImporter.h>

#include <com/sun/tools/javac/code/Scope$FilterImportScope.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Scope$FilterImportScope = ::com::sun::tools::javac::code::Scope$FilterImportScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Scope$FilterImportScope$SymbolImporter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Scope$FilterImportScope;", nullptr, $FINAL | $SYNTHETIC, $field(Scope$FilterImportScope$SymbolImporter, this$0)},
	{"processed", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol;>;", 0, $field(Scope$FilterImportScope$SymbolImporter, processed)},
	{"delegates", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;>;", 0, $field(Scope$FilterImportScope$SymbolImporter, delegates)},
	{"inspectSuperTypes", "Z", nullptr, $FINAL, $field(Scope$FilterImportScope$SymbolImporter, inspectSuperTypes)},
	{}
};

$MethodInfo _Scope$FilterImportScope$SymbolImporter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Scope$FilterImportScope;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Scope$FilterImportScope$SymbolImporter::*)($Scope$FilterImportScope*,bool)>(&Scope$FilterImportScope$SymbolImporter::init$))},
	{"doLookup", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Ljava/lang/Iterable;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;", $ABSTRACT},
	{"importFrom", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/List<Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;>;)Lcom/sun/tools/javac/util/List<Ljava/lang/Iterable<Lcom/sun/tools/javac/code/Symbol;>;>;", 0},
	{}
};

$InnerClassInfo _Scope$FilterImportScope$SymbolImporter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$FilterImportScope", "com.sun.tools.javac.code.Scope", "FilterImportScope", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.code.Scope$FilterImportScope$SymbolImporter", "com.sun.tools.javac.code.Scope$FilterImportScope", "SymbolImporter", $ABSTRACT},
	{}
};

$ClassInfo _Scope$FilterImportScope$SymbolImporter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Scope$FilterImportScope$SymbolImporter",
	"java.lang.Object",
	nullptr,
	_Scope$FilterImportScope$SymbolImporter_FieldInfo_,
	_Scope$FilterImportScope$SymbolImporter_MethodInfo_,
	nullptr,
	nullptr,
	_Scope$FilterImportScope$SymbolImporter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$FilterImportScope$SymbolImporter($Class* clazz) {
	return $of($alloc(Scope$FilterImportScope$SymbolImporter));
}

void Scope$FilterImportScope$SymbolImporter::init$($Scope$FilterImportScope* this$0, bool inspectSuperTypes) {
	$set(this, this$0, this$0);
	$set(this, processed, $new($HashSet));
	$set(this, delegates, $List::nil());
	this->inspectSuperTypes = inspectSuperTypes;
}

$List* Scope$FilterImportScope$SymbolImporter::importFrom($Symbol$TypeSymbol* tsym, $List* results$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, results, results$renamed);
	if (tsym == nullptr || !$nc(this->processed)->add(tsym)) {
		return results;
	}
	if (this->inspectSuperTypes) {
		$assign(results, importFrom($nc($($nc(this->this$0->types)->supertype($nc(tsym)->type)))->tsym, results));
		{
			$var($Iterator, i$, $nc($($nc(this->this$0->types)->interfaces($nc(tsym)->type)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Type, t, $cast($Type, i$->next()));
				$assign(results, importFrom($nc(t)->tsym, results));
			}
		}
	}
	return $nc(results)->prepend($(doLookup(tsym)));
}

Scope$FilterImportScope$SymbolImporter::Scope$FilterImportScope$SymbolImporter() {
}

$Class* Scope$FilterImportScope$SymbolImporter::load$($String* name, bool initialize) {
	$loadClass(Scope$FilterImportScope$SymbolImporter, name, initialize, &_Scope$FilterImportScope$SymbolImporter_ClassInfo_, allocate$Scope$FilterImportScope$SymbolImporter);
	return class$;
}

$Class* Scope$FilterImportScope$SymbolImporter::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com