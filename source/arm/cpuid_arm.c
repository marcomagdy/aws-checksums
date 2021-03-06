/*
 * Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/* for the moment, fallback to SW on ARM until MSFT adds intrensics for ARM v8.1+ */
#if defined(_M_ARM) || defined(__arm__) || defined(__ARM_ARCH_ISA_A64)
#    include <aws/checksums/cpuid.h>

int aws_checksums_is_cpuid_supported(void) {
    return 0;
}

int aws_checksums_is_clmul_present(void) {
    return 0;
}
int aws_checksums_is_sse41_present(void) {
    return 0;
}
int aws_checksums_is_sse42_present(void) {
    return 0;
}
#endif
