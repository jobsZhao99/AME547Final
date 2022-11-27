/* Include files */

#include "ur5bh_cgxe.h"
#include "m_9CNGTHwChsXQ3pY4C91nYG.h"
#include "m_HfvclpOtaiDb7VpNII1xZG.h"

unsigned int cgxe_ur5bh_method_dispatcher(SimStruct* S, int_T method, void* data)
{
  if (ssGetChecksum0(S) == 1389787601 &&
      ssGetChecksum1(S) == 2337543530 &&
      ssGetChecksum2(S) == 107810119 &&
      ssGetChecksum3(S) == 1774914200) {
    method_dispatcher_9CNGTHwChsXQ3pY4C91nYG(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1933860414 &&
      ssGetChecksum1(S) == 3525910413 &&
      ssGetChecksum2(S) == 1341473114 &&
      ssGetChecksum3(S) == 1608879330) {
    method_dispatcher_HfvclpOtaiDb7VpNII1xZG(S, method, data);
    return 1;
  }

  return 0;
}
