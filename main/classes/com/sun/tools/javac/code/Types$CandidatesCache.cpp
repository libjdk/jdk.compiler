#include <com/sun/tools/javac/code/Types$CandidatesCache.h>

#include <com/sun/tools/javac/code/Types$CandidatesCache$Entry.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $Types = ::com::sun::tools::javac::code::Types;
using $Types$CandidatesCache$Entry = ::com::sun::tools::javac::code::Types$CandidatesCache$Entry;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$CandidatesCache_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$CandidatesCache, this$0)},
	{"cache", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Types$CandidatesCache$Entry;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;>;>;", $PUBLIC, $field(Types$CandidatesCache, cache)},
	{}
};

$MethodInfo _Types$CandidatesCache_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, $PUBLIC, $method(static_cast<void(Types$CandidatesCache::*)($Types*)>(&Types$CandidatesCache::init$))},
	{"get", "(Lcom/sun/tools/javac/code/Types$CandidatesCache$Entry;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Types$CandidatesCache$Entry;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;>;", $PUBLIC},
	{"put", "(Lcom/sun/tools/javac/code/Types$CandidatesCache$Entry;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Types$CandidatesCache$Entry;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$MethodSymbol;>;)V", $PUBLIC},
	{}
};

$InnerClassInfo _Types$CandidatesCache_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$CandidatesCache", "com.sun.tools.javac.code.Types", "CandidatesCache", $PUBLIC},
	{"com.sun.tools.javac.code.Types$CandidatesCache$Entry", "com.sun.tools.javac.code.Types$CandidatesCache", "Entry", 0},
	{}
};

$ClassInfo _Types$CandidatesCache_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.Types$CandidatesCache",
	"java.lang.Object",
	nullptr,
	_Types$CandidatesCache_FieldInfo_,
	_Types$CandidatesCache_MethodInfo_,
	nullptr,
	nullptr,
	_Types$CandidatesCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$CandidatesCache($Class* clazz) {
	return $of($alloc(Types$CandidatesCache));
}

void Types$CandidatesCache::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$set(this, cache, $new($WeakHashMap));
}

$List* Types$CandidatesCache::get($Types$CandidatesCache$Entry* e) {
	return $cast($List, $nc(this->cache)->get(e));
}

void Types$CandidatesCache::put($Types$CandidatesCache$Entry* e, $List* msymbols) {
	$nc(this->cache)->put(e, msymbols);
}

Types$CandidatesCache::Types$CandidatesCache() {
}

$Class* Types$CandidatesCache::load$($String* name, bool initialize) {
	$loadClass(Types$CandidatesCache, name, initialize, &_Types$CandidatesCache_ClassInfo_, allocate$Types$CandidatesCache);
	return class$;
}

$Class* Types$CandidatesCache::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com