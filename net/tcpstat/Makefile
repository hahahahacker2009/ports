COMMENT=	report network interface statistics

DISTNAME=	tcpstat-1.5
REVISION=	1
CATEGORIES=	net
SITES=		http://www.frenchfries.net/paul/tcpstat/

HOMEPAGE=	http://www.frenchfries.net/paul/tcpstat/

MAINTAINER=	Mark Lumsden <lum@openbsd.org>

# BSD license
PERMIT_PACKAGE=	Yes

WANTLIB=		c m pcap

CONFIGURE_STYLE= gnu

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/tcpstat
	${INSTALL_DATA} ${WRKSRC}/doc/Tips_and_Tricks.txt \
		${PREFIX}/share/examples/tcpstat

.include <bsd.port.mk>
