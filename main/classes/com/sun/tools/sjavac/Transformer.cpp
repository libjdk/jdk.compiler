#include <com/sun/tools/sjavac/Transformer.h>

#include <com/sun/tools/sjavac/comp/CompilationService.h>
#include <com/sun/tools/sjavac/options/Options.h>
#include <java/net/URI.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $CompilationService = ::com::sun::tools::sjavac::comp::CompilationService;
using $Options = ::com::sun::tools::sjavac::options::Options;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

$MethodInfo _Transformer_MethodInfo_[] = {
	{"setExtra", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setExtra", "(Lcom/sun/tools/sjavac/options/Options;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"transform", "(Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/util/Map;Ljava/util/Set;Ljava/util/Map;Ljava/net/URI;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;IZI)Z", "(Lcom/sun/tools/sjavac/comp/CompilationService;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;Ljava/util/Set<Ljava/net/URI;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;Ljava/net/URI;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;IZI)Z", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Transformer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.sjavac.Transformer",
	nullptr,
	nullptr,
	nullptr,
	_Transformer_MethodInfo_
};

$Object* allocate$Transformer($Class* clazz) {
	return $of($alloc(Transformer));
}

$Class* Transformer::load$($String* name, bool initialize) {
	$loadClass(Transformer, name, initialize, &_Transformer_ClassInfo_, allocate$Transformer);
	return class$;
}

$Class* Transformer::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com