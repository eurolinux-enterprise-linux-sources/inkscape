#ifndef SP_FEIMAGE_FNS_H
#define SP_FEIMAGE_FNS_H

/** \file 
 * Macros and fn declarations related to gaussian blur filter.
 */

#include <glib-object.h>
#include <glib.h>

namespace Inkscape {
namespace XML {
class Node;
}
}

class SPFeImage;

#define SP_TYPE_FEIMAGE (sp_feImage_get_type())
#define SP_FEIMAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST((obj), SP_TYPE_FEIMAGE, SPFeImage))
#define SP_FEIMAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST((klass), SP_TYPE_FEIMAGE, SPFeImageClass))
#define SP_IS_FEIMAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE((obj), SP_TYPE_FEIMAGE))
#define SP_IS_FEIMAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass), SP_TYPE_FEIMAGE))

GType sp_feImage_get_type();

#endif /* !SP_FEIMAGE_FNS_H */

/*
  Local Variables:
  mode:c++
  c-file-style:"stroustrup"
  c-file-offsets:((innamespace . 0)(inline-open . 0)(case-label . +))
  indent-tabs-mode:nil
  fill-column:99
  End:
*/
// vim: filetype=cpp:expandtab:shiftwidth=4:tabstop=8:softtabstop=4:encoding=utf-8:textwidth=99 :
