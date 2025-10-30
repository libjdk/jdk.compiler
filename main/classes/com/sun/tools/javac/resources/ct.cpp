#include <com/sun/tools/javac/resources/ct.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

$MethodInfo _ct_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ct::*)()>(&ct::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _ct_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.resources.ct",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ct_MethodInfo_
};

$Object* allocate$ct($Class* clazz) {
	return $of($alloc(ct));
}

void ct::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ct::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("apple.laf.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("apple.security.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.apple.eawt.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.apple.eawt.event.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.apple.eio.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.apple.laf.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.oracle.webservices.internal.api.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.oracle.webservices.internal.api.databinding.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.oracle.webservices.internal.api.message.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.oracle.webservices.internal.impl.encoding.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.oracle.webservices.internal.impl.internalspi.encoding.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.oracle.xmlns.internal.webservices.jaxws_databinding.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.accessibility.internal.resources.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.activation.registries.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.awt.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.beans.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.beans.decoder.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.beans.editors.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.beans.finder.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.beans.infos.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.beans.introspect.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.beans.util.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.activation.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.copyobject.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.corba.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.dynamicany.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.encoding.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.interceptors.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.io.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.ior.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.ior.iiop.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.javax.rmi.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.javax.rmi.CORBA.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.legacy.connection.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.logging.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.monitoring.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.naming.cosnaming.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.naming.namingutil.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.naming.pcosnaming.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.oa.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.oa.poa.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.oa.toa.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.orb.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.orbutil.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.orbutil.closure.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.orbutil.concurrent.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.orbutil.fsm.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.orbutil.graph.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.orbutil.threadpool.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.presentation.rmi.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.protocol.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.protocol.giopmsgheaders.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.resolver.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.transport.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.util.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.internal.CosNaming.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.internal.Interceptors.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.internal.POA.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.internal.corba.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.internal.iiop.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.org.omg.CORBA.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.pept.broker.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.pept.encoding.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.pept.protocol.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.pept.transport.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.activation.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.activation.InitialNameServicePackage.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.activation.LocatorPackage.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.activation.RepositoryPackage.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.copyobject.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.encoding.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.extension.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.ior.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.ior.iiop.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.legacy.connection.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.legacy.interceptor.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.logging.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.monitoring.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.oa.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.orb.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.orbutil.closure.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.orbutil.fsm.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.orbutil.proxy.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.orbutil.threadpool.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.presentation.rmi.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.protocol.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.resolver.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.servicecontext.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.transport.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.demo.jvmti.hprof.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.imageio.plugins.bmp.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.imageio.plugins.common.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.imageio.plugins.gif.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.imageio.plugins.jpeg.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.imageio.plugins.png.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.imageio.plugins.wbmp.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.imageio.spi.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.imageio.stream.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.istack.internal.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.istack.internal.localization.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.istack.internal.logging.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.swing.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.swing.plaf.gtk.resources.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.swing.plaf.motif.resources.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.swing.plaf.nimbus.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.swing.plaf.windows.resources.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.util.jar.pack.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java_cup.internal.runtime.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.defaults.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.interceptor.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.mbeanserver.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.remote.internal.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.remote.protocol.rmi.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.remote.security.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.remote.util.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.cosnaming.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.dns.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.ldap.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.ldap.ext.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.ldap.pool.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.ldap.sasl.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.rmi.registry.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.toolkit.corba.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.toolkit.ctx.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.toolkit.dir.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.toolkit.url.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.url.corbaname.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.url.dns.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.url.iiop.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.url.iiopname.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.url.ldap.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.url.ldaps.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.url.rmi.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.management.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.media.sound.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.naming.internal.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.net.httpserver.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.net.httpserver.spi.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.net.ssl.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.net.ssl.internal.www.protocol.https.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.nio.file.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.nio.sctp.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.bcel.internal.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.bcel.internal.classfile.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.bcel.internal.generic.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.bcel.internal.util.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.regexp.internal.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.extensions.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.lib.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.res.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.templates.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.utils.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xslt.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.cmdline.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.cmdline.getopt.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.compiler.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.compiler.util.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.dom.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.runtime.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.runtime.output.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.trax.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.util.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.dom.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.dom.events.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.dtd.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.dtd.models.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.dv.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.dv.dtd.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.dv.util.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.dv.xs.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.io.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.msg.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.validation.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.xpath.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.xpath.regex.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.xs.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.xs.identity.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.xs.models.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.xs.opti.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.xs.traversers.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.xs.util.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.jaxp.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.jaxp.datatype.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.jaxp.validation.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.parsers.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.util.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.utils.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.xinclude.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.xni.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.xni.grammars.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.xni.parser.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.xpointer.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.xs.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.xs.datatypes.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.dtm.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.dtm.ref.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.dtm.ref.dom2dtm.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.res.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.resolver.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.resolver.helpers.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.resolver.readers.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.resolver.tools.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.algorithms.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.algorithms.implementations.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.c14n.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.c14n.helper.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.c14n.implementations.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.encryption.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.exceptions.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.keys.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.keys.content.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.keys.content.keyvalues.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.keys.content.x509.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.keys.keyresolver.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.keys.storage.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.keys.storage.implementations.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.signature.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.signature.reference.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.transforms.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.transforms.implementations.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.transforms.params.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.utils.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.utils.resolver.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.security.utils.resolver.implementations.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.serialize.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.serializer.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.serializer.dom3.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.serializer.utils.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.utils.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.utils.res.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.axes.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.compiler.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.domapi.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.functions.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.jaxp.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.objects.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.operations.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.patterns.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.res.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.glassfish.external.amx.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.glassfish.external.arc.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.glassfish.external.probe.provider.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.glassfish.external.probe.provider.annotations.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.glassfish.external.statistics.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.glassfish.external.statistics.annotations.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.glassfish.external.statistics.impl.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.glassfish.gmbal.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.glassfish.gmbal.util.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.omg.CORBA.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.omg.CORBA.ValueDefPackage.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.omg.CORBA.portable.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.omg.SendingContext.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.omg.SendingContext.CodeBasePackage.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.rmi.rmid.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.rowset.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.rowset.internal.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.rowset.providers.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.auth.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.auth.callback.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.auth.login.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.auth.module.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.cert.internal.x509.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.jgss.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.ntlm.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.sasl.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.sasl.digest.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.sasl.gsskerb.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.sasl.ntlm.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.sasl.util.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.swing.internal.plaf.basic.resources.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.swing.internal.plaf.metal.resources.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.swing.internal.plaf.synth.resources.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.tracing.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.tracing.dtrace.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.annotation.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.api.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.api.impl.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.marshaller.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.unmarshaller.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.util.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.bytecode.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.model.annotation.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.model.core.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.model.impl.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.model.nav.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.model.runtime.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.model.util.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.runtime.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.runtime.output.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.runtime.property.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.runtime.reflect.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.runtime.reflect.opt.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.runtime.unmarshaller.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.schemagen.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.schemagen.episode.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.schemagen.xmlschema.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.bind.v2.util.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.fastinfoset.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.fastinfoset.algorithm.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.fastinfoset.alphabet.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.fastinfoset.dom.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.fastinfoset.org.apache.xerces.util.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.fastinfoset.sax.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.fastinfoset.stax.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.fastinfoset.stax.events.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.fastinfoset.stax.factory.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.fastinfoset.stax.util.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.fastinfoset.tools.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.fastinfoset.util.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.fastinfoset.vocab.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.messaging.saaj.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.messaging.saaj.client.p2p.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.messaging.saaj.packaging.mime.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.messaging.saaj.packaging.mime.internet.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.messaging.saaj.packaging.mime.util.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.messaging.saaj.soap.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.messaging.saaj.soap.dynamic.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.messaging.saaj.soap.impl.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.messaging.saaj.soap.name.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.messaging.saaj.soap.ver1_1.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.messaging.saaj.soap.ver1_2.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.messaging.saaj.util.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.messaging.saaj.util.stax.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.messaging.saaj.util.transform.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.org.jvnet.fastinfoset.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.org.jvnet.fastinfoset.sax.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.org.jvnet.fastinfoset.sax.helpers.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.org.jvnet.fastinfoset.stax.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.org.jvnet.mimepull.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.org.jvnet.staxex.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.org.jvnet.staxex.util.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.stream.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.stream.buffer.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.stream.buffer.sax.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.stream.buffer.stax.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.stream.dtd.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.stream.dtd.nonvalidating.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.stream.events.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.stream.util.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.stream.writers.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.txw2.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.txw2.annotation.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.txw2.output.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.addressing.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.addressing.model.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.addressing.policy.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.addressing.v200408.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.addressing.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.client.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.config.management.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.config.management.policy.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.databinding.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.fastinfoset.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.ha.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.handler.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.message.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.message.saaj.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.message.stream.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.model.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.model.soap.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.model.wsdl.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.model.wsdl.editable.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.pipe.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.pipe.helper.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.policy.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.policy.subject.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.server.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.streaming.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.wsdl.parser.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.api.wsdl.writer.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.assembler.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.assembler.dev.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.assembler.jaxws.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.binding.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.client.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.client.dispatch.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.client.sei.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.commons.xmlutil.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.config.management.policy.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.config.metro.dev.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.config.metro.util.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.db.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.db.glassfish.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.developer.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.dump.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.encoding.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.encoding.fastinfoset.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.encoding.policy.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.encoding.soap.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.encoding.soap.streaming.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.encoding.xml.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.fault.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.handler.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.message.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.message.jaxb.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.message.saaj.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.message.source.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.message.stream.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.model.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.model.soap.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.model.wsdl.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.org.objectweb.asm.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.policy.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.policy.jaxws.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.policy.jaxws.spi.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.policy.privateutil.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.policy.sourcemodel.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.policy.sourcemodel.attach.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.policy.sourcemodel.wspolicy.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.policy.spi.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.policy.subject.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.protocol.soap.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.protocol.xml.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.resources.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.runtime.config.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.server.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.server.provider.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.server.sei.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.spi.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.spi.db.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.streaming.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.transport.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.transport.http.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.transport.http.client.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.transport.http.server.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.util.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.util.exception.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.util.pipe.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.util.xml.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.wsdl.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.wsdl.parser.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.wsdl.writer.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.wsdl.writer.document.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.wsdl.writer.document.http.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.wsdl.writer.document.soap.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.wsdl.writer.document.soap12.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.xml.internal.ws.wsdl.writer.document.xsd.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.dnd.peer.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.peer.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("java.desktop.macosx.classes.com.apple.laf.resources.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("java.desktop.macosx.classes.sun.awt.resources.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("java.desktop.windows.classes.sun.awt.windows.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("java.io.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.lang.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.lang.annotation.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.lang.instrument.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("java.lang.invoke.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.lang.management.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("java.lang.ref.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.lang.reflect.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.math.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.net.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.nio.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.nio.channels.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.nio.channels.spi.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.nio.charset.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.nio.charset.spi.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.nio.file.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.nio.file.attribute.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.nio.file.spi.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.rmi.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("java.rmi.activation.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("java.rmi.dgc.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("java.rmi.registry.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("java.rmi.server.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.cert.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.interfaces.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.spec.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.sql.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("java.text.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.text.spi.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.chrono.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.format.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.temporal.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.zone.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.concurrent.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.concurrent.atomic.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.concurrent.locks.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.function.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.jar.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.logging.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.prefs.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.regex.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.spi.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.stream.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.zip.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.annotation.processing.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.lang.model.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.lang.model.element.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.lang.model.type.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.lang.model.util.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management.loading.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management.modelmbean.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management.monitor.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management.openmbean.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management.relation.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management.remote.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management.remote.rmi.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management.timer.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.naming.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.naming.directory.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.naming.event.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.naming.ldap.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.naming.spi.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.net.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.net.ssl.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.rmi.ssl.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.script.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.security.auth.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.security.auth.callback.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.security.auth.kerberos.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.security.auth.login.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.security.auth.spi.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.security.auth.x500.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.security.cert.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.security.sasl.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.smartcardio.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.sql.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.sql.rowset.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.sql.rowset.serial.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.sql.rowset.spi.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.tools.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.transaction.xa.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.crypto.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.crypto.dom.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.crypto.dsig.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.crypto.dsig.dom.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.crypto.dsig.keyinfo.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.crypto.dsig.spec.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.datatype.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.namespace.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.parsers.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.stream.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.stream.events.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.stream.util.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.transform.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.transform.dom.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.transform.sax.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.transform.stax.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.transform.stream.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.validation.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.xpath.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("jdk.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("jdk.internal.org.objectweb.asm.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("jdk.internal.org.objectweb.asm.commons.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("jdk.internal.org.objectweb.asm.signature.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("jdk.internal.org.objectweb.asm.tree.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("jdk.internal.org.objectweb.asm.tree.analysis.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("jdk.internal.org.objectweb.asm.util.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("jdk.internal.org.xml.sax.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("jdk.internal.org.xml.sax.helpers.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("jdk.internal.util.xml.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("jdk.internal.util.xml.impl.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("jdk.net.*"_s),
			$of("compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("org.ietf.jgss.*"_s),
			$of("compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("org.jcp.xml.dsig.internal.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("org.jcp.xml.dsig.internal.dom.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.bootstrap.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.css.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.events.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.html.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.ls.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.ranges.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.stylesheets.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.traversal.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.views.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.xpath.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("org.xml.sax.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("org.xml.sax.ext.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("org.xml.sax.helpers.*"_s),
			$of("compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.applet.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.applet.resources.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.X11.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.datatransfer.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.dnd.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.event.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.geom.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.im.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.image.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.motif.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.resources.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.shell.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.util.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.windows.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.corba.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.datatransfer.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.font.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.instrument.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.invoke.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.invoke.anon.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.invoke.empty.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.invoke.util.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.io.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.java2d.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.java2d.cmm.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.java2d.cmm.lcms.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.java2d.d3d.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.java2d.jules.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.java2d.loops.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.java2d.opengl.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.java2d.pipe.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.java2d.pipe.hw.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.java2d.pisces.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.java2d.windows.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.java2d.x11.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.java2d.xr.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.launcher.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.launcher.resources.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.lwawt.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.lwawt.macosx.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.management.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.management.counter.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.management.counter.perf.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.management.jdp.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.management.jmxremote.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.management.resources.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.misc.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.misc.resources.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.dns.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.ftp.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.ftp.impl.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.httpserver.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.idn.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.sdp.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.smtp.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.spi.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.spi.nameservice.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.util.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.content.audio.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.content.image.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.content.text.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.http.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.file.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.ftp.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.http.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.http.logging.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.http.ntlm.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.http.spnego.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.https.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.jar.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.mailto.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.netdoc.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.nio.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.nio.ch.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.nio.ch.sctp.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.nio.cs.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.nio.fs.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.print.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.print.resources.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.annotation.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.generics.factory.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.generics.parser.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.generics.reflectiveObjects.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.generics.repository.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.generics.scope.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.generics.tree.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.generics.visitor.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.misc.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.rmi.log.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.rmi.registry.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.rmi.runtime.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.rmi.server.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.rmi.transport.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.rmi.transport.proxy.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.rmi.transport.tcp.*"_s),
			$of("proprietary compact2"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.action.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.jca.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.jgss.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.jgss.krb5.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.jgss.spi.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.jgss.spnego.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.jgss.wrapper.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5.internal.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5.internal.ccache.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5.internal.crypto.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5.internal.crypto.dk.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5.internal.ktab.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5.internal.rcache.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5.internal.tools.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5.internal.util.*"_s),
			$of("proprietary compact3"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.pkcs.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.pkcs10.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.pkcs12.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.provider.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.provider.certpath.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.provider.certpath.ldap.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.provider.certpath.ssl.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.rsa.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.smartcardio.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.timestamp.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.tools.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.tools.keytool.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.tools.policytool.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.util.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.validator.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.x509.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.swing.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.swing.icon.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.swing.plaf.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.swing.plaf.synth.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.swing.plaf.windows.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.swing.table.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.swing.text.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.swing.text.html.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.text.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.text.bidi.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.text.normalizer.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.text.resources.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.text.resources.en.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.tools.jar.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.tools.jar.resources.*"_s),
			$of("proprietary"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.tracing.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.tracing.dtrace.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.util.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.util.calendar.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.util.cldr.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.util.locale.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.util.locale.provider.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.util.logging.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.util.logging.resources.*"_s),
			$of("proprietary compact1"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.util.resources.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.util.resources.en.*"_s),
			$of("hidden"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.util.spi.*"_s),
			$of("hidden"_s)
		})
	});
}

ct::ct() {
}

$Class* ct::load$($String* name, bool initialize) {
	$loadClass(ct, name, initialize, &_ct_ClassInfo_, allocate$ct);
	return class$;
}

$Class* ct::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com