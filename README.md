# xrdp

yum install -y firewalld
firewall-cmd --add-port=3389/tcp --permanent
firewall-cmd --reload



./configure --prefix=/usr/local/xrdp --enable-fuse --disable-ulalaca
./configure XRDP_CFLAGS=-I/home/gxh/xrdp/xrdp/common XRDP_LIBS=/usr/local/xrdp/lib

echo gnome-session > ~/.xsession



/etc/xrdp/startwm.sh
unset DBUS_SESSION_BUS_ADDRESS
unset XDG_RUNTIME_DIR
gnome-session

sesman.ini
[Globals]
ListenAddress=0.0.0.0
ListenPort=3350
MaxSessions=10
