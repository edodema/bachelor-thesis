#[repr(C)]
union U {
    f1: u32,
    f2: f32,
}

fn main() {
    let u = U { f1:1 };
    let _f =  u.f1;
}
