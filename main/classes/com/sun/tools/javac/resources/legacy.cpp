#include <com/sun/tools/javac/resources/legacy.h>

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

$MethodInfo _legacy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(legacy::*)()>(&legacy::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _legacy_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.tools.javac.resources.legacy",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_legacy_MethodInfo_
};

$Object* allocate$legacy($Class* clazz) {
	return $of($alloc(legacy));
}

void legacy::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* legacy::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("com.sun.accessibility.internal.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.awt"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.beans"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.activation"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.copyobject"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.corba"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.dynamicany"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.encoding"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.interceptors"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.io"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.ior"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.ior.iiop"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.javax.rmi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.javax.rmi.CORBA"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.legacy.connection"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.logging"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.monitoring"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.naming.cosnaming"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.naming.namingutil"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.naming.pcosnaming"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.oa"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.oa.poa"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.oa.toa"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.orb"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.orbutil"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.orbutil.closure"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.orbutil.concurrent"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.orbutil.fsm"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.orbutil.graph"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.orbutil.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.orbutil.threadpool"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.presentation.rmi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.protocol"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.protocol.giopmsgheaders"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.resolver"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.transport"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.impl.util"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.internal.CosNaming"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.internal.Interceptors"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.internal.POA"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.internal.corba"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.internal.iiop"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.org.omg.CORBA"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.pept.broker"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.pept.encoding"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.pept.protocol"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.pept.transport"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.activation"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.activation.InitialNameServicePackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.activation.LocatorPackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.activation.RepositoryPackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.copyobject"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.encoding"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.extension"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.ior"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.ior.iiop"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.legacy.connection"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.legacy.interceptor"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.logging"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.monitoring"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.oa"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.orb"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.orbutil.closure"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.orbutil.fsm"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.orbutil.proxy"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.orbutil.threadpool"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.presentation.rmi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.protocol"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.resolver"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.servicecontext"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.corba.se.spi.transport"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.imageio.metadata"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.imageio.plugins.bmp"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.imageio.plugins.common"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.imageio.plugins.gif"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.imageio.plugins.jpeg"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.imageio.plugins.png"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.imageio.plugins.wbmp"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.imageio.spi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.swing"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.swing.plaf.gtk"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.swing.plaf.gtk.icons"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.swing.plaf.gtk.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.swing.plaf.gtk.resources.metacity.SwingFallbackTheme.metacity-1"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.swing.plaf.motif"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.swing.plaf.motif.icons"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.swing.plaf.motif.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.swing.plaf.nimbus"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.swing.plaf.windows"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.swing.plaf.windows.icons"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.swing.plaf.windows.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java.util.jar.pack"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java_cup.internal"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.java_cup.internal.runtime"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jlex.internal"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.defaults"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.interceptor"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.mbeanserver"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.remote.internal"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.remote.protocol.iiop"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.remote.protocol.rmi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.remote.security"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.remote.util"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.snmp"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.snmp.IPAcl"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.snmp.agent"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.snmp.daemon"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.snmp.defaults"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.snmp.internal"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.snmp.mpm"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.snmp.tasks"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jmx.trace"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.cosnaming"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.dns"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.ldap"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.ldap.ext"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.ldap.pool"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.ldap.sasl"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.rmi.registry"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.toolkit.corba"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.toolkit.ctx"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.toolkit.dir"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.toolkit.url"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.url.corbaname"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.url.dns"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.url.iiop"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.url.iiopname"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.url.ldap"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.url.ldaps"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.jndi.url.rmi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.management"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.management.jmx"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.media.sound"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.naming.internal"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.net.ssl"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.net.ssl.internal.ssl"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.net.ssl.internal.www.protocol.https"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.bcel.internal"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.bcel.internal.classfile"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.bcel.internal.generic"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.bcel.internal.util"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.bcel.internal.verifier"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.bcel.internal.verifier.exc"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.bcel.internal.verifier.statics"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.bcel.internal.verifier.structurals"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.html.internal.dom"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.regexp.internal"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.wml.internal"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.wml.internal.dom"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.client"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.extensions"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.lib"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.res"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.templates"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xslt"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.cmdline"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.cmdline.getopt"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.compiler"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.compiler.util"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.dom"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.runtime"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.runtime.output"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.trax"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xalan.internal.xsltc.util"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.dom"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.dom.events"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.dom3.as"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.dtd"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.dtd.models"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.dv"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.dv.dtd"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.dv.util"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.dv.xs"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.io"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.msg"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.validation"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.xpath"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.xpath.regex"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.xs"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.xs.dom"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.xs.identity"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.xs.models"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.xs.opti"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.xs.traversers"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.impl.xs.util"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.jaxp"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.jaxp.datatype"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.jaxp.validation"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.jaxp.validation.xs"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.parsers"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.util"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.xinclude"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.xni"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.xni.grammars"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.xni.parser"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xerces.internal.xs"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.dtm"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.dtm.ref"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.dtm.ref.dom2dtm"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.dtm.ref.sax2dtm"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.res"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.serialize"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.serializer"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.utils"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.utils.res"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.utils.synthetic"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xml.internal.utils.synthetic.reflection"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.axes"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.compiler"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.functions"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.jaxp"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.objects"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.operations"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.patterns"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.apache.xpath.internal.res"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.omg.CORBA"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.omg.CORBA.ValueDefPackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.omg.CORBA.portable"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.omg.SendingContext"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.org.omg.SendingContext.CodeBasePackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.rmi.rmid"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.rowset"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.rowset.internal"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.rowset.providers"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.auth"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.auth.callback"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.auth.login"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.auth.module"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.cert.internal.x509"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.jgss"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.sasl"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.sasl.digest"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.sasl.gsskerb"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.security.sasl.util"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.swing.internal.plaf.basic.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.swing.internal.plaf.metal.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.swing.internal.plaf.synth.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.tracing"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("com.sun.tracing.dtrace"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.applet"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.color"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.datatransfer"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.dnd"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.dnd.peer"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.event"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.font"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.geom"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.im"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.im.spi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.image"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.image.renderable"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.peer"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.print"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.beans"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.beans.beancontext"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.io"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.lang"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.lang.annotation"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.lang.instrument"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.lang.management"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.lang.ref"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.lang.reflect"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.math"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.net"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.nio"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.nio.channels"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.nio.channels.spi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.nio.charset"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.nio.charset.spi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.rmi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.rmi.activation"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.rmi.dgc"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.rmi.registry"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.rmi.server"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.acl"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.cert"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.interfaces"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.security.spec"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.sql"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.text"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.concurrent"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.concurrent.atomic"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.concurrent.locks"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.jar"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.logging"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.prefs"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.regex"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("java.util.zip"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.accessibility"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.activity"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.imageio"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.imageio.event"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.imageio.metadata"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.imageio.plugins.bmp"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.imageio.plugins.jpeg"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.imageio.spi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.imageio.stream"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management.loading"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management.modelmbean"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management.monitor"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management.openmbean"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management.relation"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management.remote"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management.remote.rmi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.management.timer"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.naming"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.naming.directory"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.naming.event"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.naming.ldap"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.naming.spi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.net"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.net.ssl"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.print"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.print.attribute"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.print.attribute.standard"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.print.event"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.rmi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.rmi.CORBA"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.rmi.ssl"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.security.auth"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.security.auth.callback"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.security.auth.kerberos"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.security.auth.login"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.security.auth.spi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.security.auth.x500"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.security.cert"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.security.sasl"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.sound.midi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.sound.midi.spi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.sound.sampled"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.sound.sampled.spi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.sql"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.sql.rowset"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.sql.rowset.serial"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.sql.rowset.spi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.border"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.colorchooser"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.event"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.filechooser"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.plaf"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.plaf.basic"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.plaf.basic.icons"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.plaf.metal"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.plaf.metal.icons"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.plaf.metal.icons.ocean"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.plaf.metal.sounds"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.plaf.multi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.plaf.nimbus"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.plaf.synth"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.table"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.text"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.text.html"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.text.html.icons"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.text.html.parser"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.text.rtf"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.text.rtf.charsets"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.tree"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.swing.undo"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.transaction"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.transaction.xa"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.datatype"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.namespace"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.parsers"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.transform"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.transform.dom"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.transform.sax"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.transform.stream"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.validation"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("javax.xml.xpath"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.ietf.jgss"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.CORBA"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.CORBA.DynAnyPackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.CORBA.ORBPackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.CORBA.TypeCodePackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.CORBA.portable"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.CORBA_2_3"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.CORBA_2_3.portable"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.CosNaming"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.CosNaming.NamingContextExtPackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.CosNaming.NamingContextPackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.Dynamic"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.DynamicAny"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.DynamicAny.DynAnyFactoryPackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.DynamicAny.DynAnyPackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.IOP"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.IOP.CodecFactoryPackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.IOP.CodecPackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.Messaging"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.PortableInterceptor"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.PortableInterceptor.ORBInitInfoPackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.PortableServer"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.PortableServer.CurrentPackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.PortableServer.POAManagerPackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.PortableServer.POAPackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.PortableServer.ServantLocatorPackage"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.PortableServer.portable"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.SendingContext"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.stub.java.rmi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.omg.stub.javax.management.remote.rmi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.bootstrap"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.css"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.events"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.html"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.ls"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.ranges"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.stylesheets"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.traversal"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.w3c.dom.views"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.xml.sax"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.xml.sax.ext"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("org.xml.sax.helpers"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.applet"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.applet.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.audio"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.X11"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.color"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.datatransfer"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.dnd"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.geom"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.im"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.image"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.image.codec"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.motif"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.shell"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.awt.windows"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.beans.editors"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.beans.infos"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.corba"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.dc.path"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.dc.pr"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.font"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.instrument"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.io"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.java2d"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.java2d.loops"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.java2d.opengl"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.java2d.pipe"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.jdbc.odbc"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.jdbc.odbc.ee"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.management"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.management.counter"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.management.counter.perf"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.management.jmxremote"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.management.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.management.snmp"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.management.snmp.jvminstr"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.management.snmp.jvmmib"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.management.snmp.util"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.misc"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.misc.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.dns"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.ftp"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.smtp"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.spi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.spi.nameservice"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.util"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.content.audio"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.content.image"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.content.text"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.http"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.doc"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.file"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.ftp"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.gopher"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.http"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.https"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.jar"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.mailto"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.netdoc"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.systemresource"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.net.www.protocol.verbatim"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.nio"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.nio.ch"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.nio.cs"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.print"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.print.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.annotation"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.generics.factory"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.generics.parser"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.generics.reflectiveObjects"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.generics.repository"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.generics.scope"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.generics.tree"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.reflect.generics.visitor"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.rmi.log"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.rmi.registry"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.rmi.registry.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.rmi.rmid.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.rmi.runtime"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.rmi.server"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.rmi.transport"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.rmi.transport.proxy"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.rmi.transport.tcp"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.action"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.jca"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.jgss"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.jgss.krb5"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.jgss.spi"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5.internal"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5.internal.ccache"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5.internal.crypto"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5.internal.crypto.dk"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5.internal.ktab"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5.internal.rcache"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5.internal.tools"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.krb5.internal.util"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.pkcs"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.provider"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.provider.certpath"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.rsa"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.timestamp"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.tools"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.util"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.validator"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.security.x509"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.swing"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.swing.plaf.synth"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.text"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.text.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.tools.hprof"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.tools.jar"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.tools.jar.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.util"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.util.calendar"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.util.locale"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sun.util.logging.resources"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sunw.io"_s),
			$of("tiger legacy"_s)
		}),
		$$new($ObjectArray, {
			$of("sunw.util"_s),
			$of("tiger legacy"_s)
		})
	});
}

legacy::legacy() {
}

$Class* legacy::load$($String* name, bool initialize) {
	$loadClass(legacy, name, initialize, &_legacy_ClassInfo_, allocate$legacy);
	return class$;
}

$Class* legacy::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com