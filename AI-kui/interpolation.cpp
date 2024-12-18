#include "include/utils.h"

torch::Tensor trilinear_interpolation(
    torch::Tensor feats,
    torch::Tensor points
)
{
    CHECK_INPUT(feats);
    CHECK_INPUT(points);
}
