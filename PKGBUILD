pkgname=root-git
_pkgname=root
_destname1="/etc/skel/"
pkgver=25.05
pkgrel=09
pkgdesc="root configs "
arch=('any')
url="https://github.com/amanre/root-git"
license=('GPL3')
makedepends=('git')
depends=('bash')
provides=("${pkgname}")
options=(!strip !emptydirs)
source=(${_pkgname}::"git+https://github.com/amanre/${_pkgname}.git")
sha256sums=('SKIP')
package() {
	install -dm755 ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.zshrc ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.xscreensaver ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.gtkrc-2.0 ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.xinitrc ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.bin ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.xsession ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.xsessionrc ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.p10k.zsh ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.cache ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.config ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.conky ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.Xresources ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.screenlayout ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.local ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.fehbg ${pkgdir}${_destname1}
	cp -r  ${srcdir}/${_pkgname}${_destname1}.face ${pkgdir}${_destname1}
}
