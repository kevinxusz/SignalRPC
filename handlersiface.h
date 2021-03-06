#ifndef HANDLERSIFACE_H
#define HANDLERSIFACE_H

// know qt core vars
#include <QtCore>
namespace srpc {

// these are to be implemented in the SignalRPC
class HandlersIface
{
public:
    HandlersIface();
    virtual ~HandlersIface() = 0;
    // slots or foo-s to implement
    virtual void handleMessage(const QString &msg) = 0;
    virtual void handleConnected(void) = 0;
    virtual void handleDisconnected(void) = 0;
    virtual void handleBytesWritten(qint64 bytes) = 0;
    virtual void handleReadyRead(void) = 0;
    virtual void handleStateChange(void) = 0;

};

} // namespace srpc

#endif // HANDLERSIFACE_H
