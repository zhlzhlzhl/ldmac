//
// Generated file, do not edit! Created by nedtool 5.0 from inet/nic/ld/LdReq.msg.
//

#ifndef __INET_LDREQ_M_H
#define __INET_LDREQ_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0500
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
   #include "common/geometry/common/Coord.h"
// }}


namespace inet {

/**
 * Class generated from <tt>inet/nic/ld/LdReq.msg:23</tt> by nedtool.
 * <pre>
 * packet LdReq
 * {
 *     int nHostId;
 *     string strHostPath;
 *     int nRequestSlotNum;
 *     Coord cdHostPosition;
 *     int nPropagationSlotNum;
 * }
 * </pre>
 */
class LdReq : public ::omnetpp::cPacket
{
  protected:
    int nHostId;
    ::omnetpp::opp_string strHostPath;
    int nRequestSlotNum;
    Coord cdHostPosition;
    int nPropagationSlotNum;

  private:
    void copy(const LdReq& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LdReq&);

  public:
    LdReq(const char *name=nullptr, int kind=0);
    LdReq(const LdReq& other);
    virtual ~LdReq();
    LdReq& operator=(const LdReq& other);
    virtual LdReq *dup() const {return new LdReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b);

    // field getter/setter methods
    virtual int getNHostId() const;
    virtual void setNHostId(int nHostId);
    virtual const char * getStrHostPath() const;
    virtual void setStrHostPath(const char * strHostPath);
    virtual int getNRequestSlotNum() const;
    virtual void setNRequestSlotNum(int nRequestSlotNum);
    virtual Coord& getCdHostPosition();
    virtual const Coord& getCdHostPosition() const {return const_cast<LdReq*>(this)->getCdHostPosition();}
    virtual void setCdHostPosition(const Coord& cdHostPosition);
    virtual int getNPropagationSlotNum() const;
    virtual void setNPropagationSlotNum(int nPropagationSlotNum);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const LdReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, LdReq& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_LDREQ_M_H

