#include "simpulse.hpp"

namespace simpulse {
#if 0
}; // pacify emacs c-mode
#endif

inline double _get_signal_to_noise_scalar(simpulse::single_pulse *sp, double sample_dt, double sample_t0, double sample_rms)
{
    return sp->get_signal_to_noise(sample_dt, sample_t0, sample_rms);
}

inline double _get_signal_to_noise_vector(simpulse::single_pulse *sp, double sample_dt, const double *sample_rms, const double *channel_weights, double sample_t0)
{
    return sp->get_signal_to_noise(sample_dt, sample_rms, channel_weights, sample_t0);
}

inline void _add_to_timestream_float(simpulse::single_pulse *sp, float *out, double out_t0, double out_t1, int out_nt, int stride)
{
    sp->add_to_timestream(out, out_t0, out_t1, out_nt, stride);
}

inline void _add_to_timestream_double(simpulse::single_pulse *sp, double *out, double out_t0, double out_t1, int out_nt, int stride)
{
    sp->add_to_timestream(out, out_t0, out_t1, out_nt, stride);
}

}  // namespace simpulse
